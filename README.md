# Turbo Riser

An arduino project to manage temperature in a fermentation cell.

It will be able to receive conf via wireless connection. This project is intended
to be uploaded on an ESP8266 device.

This project is created using [PlatformIO](https://platformio.org/) so to build it you have to [install and configure](https://docs.platformio.org/en/latest/index.html).

When _PlatformIO_ is installed and configured in your machine you also have to edit a `wificonfig.h` file in the `src/` directory to set your wifi credential.

You just have to insert your SSID and your wifi password:

```c
const char* SSID = "__YOUR_SSID__";
const char* PASSWORD = "__YOUR_PASSWORD__";
```