#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define Btn_ok 2
#define Btn_mas 3
#define Btn_menos 4

//Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas
LiquidCrystal_I2C lcd(0x27, 16, 2); //

void setup()
{
    pinMode(Btn_ok,INPUT_PULLUP);//Se define el boton ok como entrada y se habilida pullup
    pinMode(Btn_mas, INPUT_PULLUP); //Se define el boton ok como entrada y se habilida pullup
    pinMode(Btn_menos, INPUT_PULLUP); //Se define el boton ok como entrada y se habilida pullup

    lcd.init(); // Inicializar el LCD
    lcd.backlight(); // Encender la luz de fondo.
    lcd.setCursor(0,0);
    lcd.print("Hola Mundo"); // Escribimos el Mensaje en el LCD.
}

void loop()
{
    // Ubicamos el cursor en la primera posición(columna:0) de la segunda línea(fila:1)
    lcd.setCursor(0, 1);
    // Escribimos el número de segundos trascurridos
    lcd.print(millis() / 1000);
    lcd.print(" Segundos");
    delay(100);
}