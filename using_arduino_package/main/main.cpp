// file: main.c or main.cpp
#include <stdio.h>
#include "Arduino.h"
#include "freertos/task.h"
#include "Audio.h"
#include "WiFi.h"

/* Setting I2S port and variable */
#define I2S_DOUT 25
#define I2S_BCLK 27
#define I2S_LRC 26
Audio audio;

/* Setting Wi-Fi */
String ssid = "WiFi-A";
String password = "Azka1234";

extern "C" void app_main()
{
  initArduino();

  // Arduino-like setup()
  Serial.begin(115200);
  while (!Serial)
  {
    ; // wait for serial port to connect
  }
  
  // Connect to Wi-Fi
  WiFi.disconnect();
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid.c_str(), password.c_str());
  while (WiFi.status() != WL_CONNECTED)
  {
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }

  // Connect to I2C port
  audio.setPinout(I2S_BCLK, I2S_LRC, I2S_DOUT);
  // Set the volume
  audio.setVolume(21);
  // Connect to radio streaming host
  audio.connecttohost("radioislamindonesia.com/rodja-low.mp3");

  // Arduino-like loop()
  while (true)
  {
    audio.loop();                       // Keep on playing audio
    vTaskDelay(1 / portTICK_PERIOD_MS); // Give a pause so that the loop does not error
  }
}
