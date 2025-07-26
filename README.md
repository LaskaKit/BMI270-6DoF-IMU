# BMI270 Six-Axis Accelerometer and Gyroscope Module

![Mounted Module](https://github.com/LaskaKit/BMI270-6DoF-IMU/blob/main/img/LaskaKit-bmi270-6-osy-gyroskop-a-akcelerometr-2.jpg)

</br>
The BMI270 from Bosch is a modern 6-axis motion sensor that combines a 3-axis gyroscope and a 3-axis accelerometer in a compact package. This module is designed for easy integration into microcontroller projects (e.g., [ESP32](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481), [STM32](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481), [Arduino](https://github.com/sparkfun/SparkFun_BMI270_Arduino_Library)), where it provides accurate information about movement, tilt, and rotation.</br>
</br>
The BMI270 sensor is placed on our module, which includes two [uŠup connectors](https://blog.laskakit.cz/predstavujeme-univerzalni-konektor-pro-propojeni-modulu-a-cidel-%CE%BCsup/) and also a place to solder a standard 2.54mm pitch header. This allows you to easily connect the module with other modules.</br>
</br>
You can connect it not only to our development kits such as the universal [Meteo Mini with solar panel connection option](https://www.laskakit.cz/laskakit-meteo-mini/?variantId=10473), the easily programmable [ESP32-DEVKit](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481), very [low-power and compact ESP32-C3 LPKit](https://www.laskakit.cz/laskkit-esp-12-board/?variantId=10482), [ESPInk with ESP32 and large 4.2" ePaper](https://www.laskakit.cz/laskakit-espink-42-esp32-e-paper-pcb-antenna/?variantId=11400) or the [popular kit with ESP32 and 3.5" TFT display](https://www.laskakit.cz/laskakit-espd-35-esp32-3-5-tft-ili9488-touch/?variantId=12158).</br>
</br>
It is ideal for applications such as gimbal stabilization, gesture interfaces, motion detection, game controllers, wearable devices, and also step counting (integrated step counter).</br>
</br>
Specifications:</br>
Sensor model: Bosch BMI270</br>
Sensor type: 6-axis IMU (3-axis accelerometer + 3-axis gyroscope)</br>
Interface: I2C (address 0x68 [default] or 0x69)</br>
Operating voltage: 1.8 – 3.6 V (recommended 3.3 V)</br>
Acceleration measurement: ±2g, ±4g, ±8g, ±16g</br>
Rotation measurement (gyroscope): ±125°/s up to ±2000°/s</br>
Power consumption: Ultra-low power (e.g., 850 µA in full measurement mode)</br>
Features: Gesture detection, activity/inactivity, tap detection, overload, step counting</br>
Module dimensions: approximately 12 × 10 mm</br>
Compatibility: [Arduino (3.3v)](https://www.laskakit.cz/vyhledavani/?string=arduino), [ESP32](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481), [STM32](https://www.laskakit.cz/vyhledavani/?string=stm32), [Raspberry Pi](https://www.laskakit.cz/vyhledavani/?string=raspberry+pi+4b), and others</br>
Pull-up resistors for SDA and SCL: connected by default to VCC via 4.7k ohm</br>
</br>

## You can order this module at [https://www.laskakit.cz/laskakit-bmi270-6-osy-gyroskop-a-akcelerometr/](https://www.laskakit.cz/laskakit-bmi270-6-osy-gyroskop-a-akcelerometr/)

</br>
Supported Arduino IDE libraries are</br>
[https://github.com/sparkfun/SparkFun_BMI270_Arduino_Library](https://github.com/sparkfun/SparkFun_BMI270_Arduino_Library)
