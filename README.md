# Advanced Microcontroller Based Systems

This project aims to create an ESP-IDF Audio Player using Internet Radio. The main project is located in the [**using_arduino_package**](https://github.com/azkahariz/SBML/tree/main/using_arduino_package) folder, which adds the Arduino package to the ESP-IDF component, allowing coding with the Arduino approach.

Currently, I am in the process of constructing a web radio using ESP-IDF not incorporating ESP-ADF. The procedure is laid out as follows:

1. Construct a client-to-server relationship (access point/router)
2. Putting together the I2S interface
3. Establish an internet streaming link to the host
4. Broadcasting audio (internet streaming) by way of the I2S protocol to the audio system
5. Preserve the web streaming audio connection intact.

The instructions for step 1 can be found in the [**connect_wifi_v1**](https://github.com/azkahariz/SBML/tree/main/connect_wifi_v1), while the instructions for step 2 can be found in the [**build-project-01**](https://github.com/azkahariz/SBML/tree/main/build-project-01). For step 4, the preliminary result is that the ESP-IDF can generate the desired sound, such as a chicken alarm sound. This can then be developed so that the ESP-IDF can output streaming audio. The results can be viewed in the [**SPIFFS**](https://github.com/azkahariz/SBML/tree/main/SPIFFS).

## Schematic and 3D Design

<img src="https://user-images.githubusercontent.com/60981363/86747154-9f9f1d00-c074-11ea-8d05-a17a7d9f9f86.png" width="200" height="150"> <img src="https://user-images.githubusercontent.com/60981363/86747156-a2f16980-c074-11ea-8f5a-6b3f40d3a3d3.png" width="200" height="150">

<img src="https://user-images.githubusercontent.com/60981363/86747157-a38a0000-c074-11ea-8abf-6e2acd13f8f8.png" width="200" height="150"> <img src="https://user-images.githubusercontent.com/60981363/86747158-a4bb2d00-c074-11ea-8c35-d7bef6098f2a.png" width="200" height="150">