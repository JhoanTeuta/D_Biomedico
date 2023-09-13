#include <LiquidCrystal.h>

// Inicializa la librería LiquidCrystal
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Inicializa la pantalla LCD
  lcd.begin(16, 2);
}

void loop() {
  // Muestra el mensaje durante 500 milisegundos
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Alarma Activada");
  delay(500);

  // Borra el mensaje durante 500 milisegundos
  lcd.clear();
  delay(500);
}
