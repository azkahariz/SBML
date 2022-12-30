# Advanced Microcontroller Based Systems

## Table of Contents
1. [A short summary](#advanced-microcontroller-based-systems)
2. [Installation](#Installation)
3. [Usage](#Usage)
4. [Credits](#Credits)
5. [License](#License)


This project aims to create an ESP-IDF Audio Player using Internet Radio. The main project is located in the [**using_arduino_package**](tree/main/using_arduino_package) folder, which adds the Arduino package to the ESP-IDF component, allowing coding with the Arduino approach.

Currently, I am in the process of constructing a web radio using ESP-IDF not incorporating ESP-ADF. The procedure is laid out as follows:

1. Construct a client-to-server relationship (access point/router)
2. Putting together the I2S interface
3. Establish an internet streaming link to the host
4. Broadcasting audio (internet streaming) by way of the I2S protocol to the audio system
5. Preserve the web streaming audio connection intact.

The instructions for step 1 can be found in the [**connect_wifi_v1**](https://github.com/azkahariz/SBML/tree/main/connect_wifi_v1), while the instructions for step 2 can be found in the [**build-project-01**](https://github.com/azkahariz/SBML/tree/main/build-project-01). For step 4, the preliminary result is that the ESP-IDF can generate the desired sound, such as a chicken alarm sound. This can then be developed so that the ESP-IDF can output streaming audio. The results can be viewed in the [**SPIFFS**](https://github.com/azkahariz/SBML/tree/main/SPIFFS).

# Schematic and 3D Design

## Schematic

## 3D Design
<img src="https://raw.githubusercontent.com/azkahariz/SBML/main/images/gambar1.png" width="200" height="150" alt="Gambar 1"> <img src="https://raw.githubusercontent.com/azkahariz/SBML/main/images/gambar2.png" width="200" height="150" alt="Gambar 2">

<img src="https://raw.githubusercontent.com/azkahariz/SBML/main/images/gambar3.png" width="200" height="150" alt="Gambar 3"> <img src="https://raw.githubusercontent.com/azkahariz/SBML/main/images/gambar4.png" width="200" height="150" alt="Gambar 4">
