#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Define los pines RS, E, D4, D5, D6, D7

unsigned long startTime = 0; // Variable para almacenar el tiempo de inicio
unsigned long elapsedTime = 0; // Variable para almacenar el tiempo transcurrido en segundos

void setup() {
  lcd.begin(16, 2); // Inicializa la pantalla LCD con 16 columnas y 2 filas
  lcd.setCursor(0,0);
  lcd.print("Tiempo: ");
  startTime = millis(); // Registra el tiempo de inicio en milisegundos
}

void loop() {
  unsigned long currentTime = millis(); // Obtiene el tiempo actual en milisegundos
  elapsedTime = (currentTime - startTime) / 1000; // Calcula el tiempo transcurrido en segundos
  
  lcd.setCursor(9, 0); // Establece la posición del cursor en la primera fila, columna 9
  lcd.setCursor(0,1);
  lcd.print(elapsedTime); // Muestra el tiempo transcurrido en segundos
  lcd.print(" Segundos");
  
  delay(1000);
}
