# BMI270 šestiosý modul akcelerometru a gyroskopu

![Osazený modul](https://github.com/LaskaKit/BMI270-6DoF-IMU/blob/main/img/LaskaKit-bmi270-6-osy-gyroskop-a-akcelerometr-2.jpg)

</br>
BMI270 od firmy Bosch je moderní 6-osý senzor pohybu, který kombinuje 3osý gyroskop a 3osý akcelerometr v kompaktním pouzdře. Tento modul je navržen pro snadnou integraci do projektů s mikrokontroléry (např. ESP32, STM32, Arduino), kde poskytuje přesné informace o pohybu, náklonu a otáčení.</br>
</br>
Čidlo BMI270 je umístěno na našem modulu, kde najdeš dva [uŠup konektor](https://blog.laskakit.cz/predstavujeme-univerzalni-konektor-pro-propojeni-modulu-a-cidel-%CE%BCsup/)y a také místo pro zapájení standardního hřebínku s roztečí 2.54mm. Tento modul tak můžeš pohodlně propojit s dalšími moduly.</br>
</br>
Připojit to můžeš nejen do našich vývojových kitů jako jsou univerzální [Meteo Mini s možností připojení solárního panelu](https://www.laskakit.cz/laskakit-meteo-mini/?variantId=10473), jednoduše programovatelný [ESP32-DEVKit](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481), velmi [úsporný a malý kit ESP32-C3 LPKit](https://www.laskakit.cz/laskkit-esp-12-board/?variantId=10482), [ESPInk s ESP32 a velkým 4.2" ePaper](https://www.laskakit.cz/laskakit-espink-42-esp32-e-paper-pcb-antenna/?variantId=11400) nebo [populárním kitem s ESP32 a 3.5" TFT displejem](https://www.laskakit.cz/laskakit-espd-35-esp32-3-5-tft-ili9488-touch/?variantId=12158). </br>
</br>
Je ideální pro aplikace jako gimbal stabilizace, gestová rozhraní, detekce pohybu, herní ovladače, nositelná zařízení a také počítání kroků (integrovaný krokový čítač).</br>
</br>
Specifikace:</br>
Model senzoru: Bosch BMI270</br>
Typ senzoru: 6-osý IMU (3osý akcelerometr + 3osý gyroskop)</br>
Rozhraní: I2C (adresa 0x68 [výchozí] nebo 0x69)</br>
Napájecí napětí: 1,8 – 3,6 V (doporučeno 3,3 V)</br>
Měření akcelerace: ±2g, ±4g, ±8g, ±16g</br>
Měření rotace (gyroskop): ±125°/s až ±2000°/s</br>
Spotřeba: Ultra-low power (např. 850 µA v režimu plného měření)</br>
Funkce: Detekce gest, aktivita/inaktivita, poklepání, přetížení, počítání kroků</br>
Rozměry modulu: přibližně 12 × 10 mm</br>
Kompatibilita: [Arduino (3.3v)](https://www.laskakit.cz/vyhledavani/?string=arduino), [ESP32](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481), [STM32](https://www.laskakit.cz/vyhledavani/?string=stm32), [Raspberry Pi](https://www.laskakit.cz/vyhledavani/?string=raspberry+pi+4b) a další</br>
Pull-up SDA a SCL rezistory ve výchozím nastavení: připojeny na napájení VCC přes 4.7k
</br>

## Tento modul si můžeš objednat na https://www.laskakit.cz/laskakit-bmi270-6-osy-gyroskop-a-akcelerometr/

</br>
Podporované knihovny v Arduino IDE jsou</br>
https://github.com/sparkfun/SparkFun_BMI270_Arduino_Library
