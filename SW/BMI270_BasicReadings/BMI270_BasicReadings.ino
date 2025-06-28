/*
* This example code is used for LaskaKit ESP32-S3-DEVKit https://www.laskakit.cz/laskakit-esp32-s3-devkit/
* with Inertial Measurement Unit BMI270 on board
* board reads the acceleration and gyroscope values from the BMI270 sensor and continuously prints them to the Serial Monitor.
* 
* Board:    LaskaKit ESP32-S3-DEVKit:   https://www.laskakit.cz/laskakit-esp32-s3-devkit/
* ASensor   LaskaKit BMI270
* 
* laskakit.cz 2025
*
* Libraries: SparkFun_BMI270_Arduino_Library.h
*/

#include <Wire.h>
#include "SparkFun_BMI270_Arduino_Library.h"

#define PIN_ON 47
#define SDA 42
#define SCL 2

// Create a new sensor object
BMI270 imu;

// I2C address selection
uint8_t i2cAddress = BMI2_I2C_PRIM_ADDR; // 0x68

void setup()
{
    // Start serial
    Serial.begin(115200);
    Serial.println("BMI270 Example 1 - Basic Readings I2C");
    pinMode(PIN_ON, OUTPUT);      // Set EN pin for second stabilisator as output
    digitalWrite(PIN_ON, HIGH);   // Turn on the second stabilisator
    Wire.begin(SDA, SCL);            // set dedicated I2C pins 42 - SDA, 2 - SCL for ESPD-3.5 board

    // Check if sensor is connected and initialize
    // Address is optional (defaults to 0x68)
    while(imu.beginI2C(i2cAddress) != BMI2_OK)
    {
        // Not connected, inform user
        Serial.println("Error: BMI270 not connected, check wiring and I2C address!");

        // Wait a bit to see if connection is established
        delay(1000);
    }

    Serial.println("BMI270 connected!");
}

void loop()
{
    // Get measurements from the sensor. This must be called before accessing
    // the sensor data, otherwise it will never update
    imu.getSensorData();

    // Print acceleration data
    Serial.print("Acceleration in g's");
    Serial.print("\t");
    Serial.print("X: ");
    Serial.print(imu.data.accelX, 3);
    Serial.print("\t");
    Serial.print("Y: ");
    Serial.print(imu.data.accelY, 3);
    Serial.print("\t");
    Serial.print("Z: ");
    Serial.print(imu.data.accelZ, 3);

    Serial.print("\t");

    // Print rotation data
    Serial.print("Rotation in deg/sec");
    Serial.print("\t");
    Serial.print("X: ");
    Serial.print(imu.data.gyroX, 3);
    Serial.print("\t");
    Serial.print("Y: ");
    Serial.print(imu.data.gyroY, 3);
    Serial.print("\t");
    Serial.print("Z: ");
    Serial.println(imu.data.gyroZ, 3);

    // Print 50x per second
    delay(20);
}