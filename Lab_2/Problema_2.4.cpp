#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);

  // Establece la velocidad de desplazamiento del texto
  lcd.autoscroll();
}

void loop() {
  // Texto a mostrar
  String texto = "vamo a calmano primo hedmano ";

  // Desplaza el texto hacia la derecha y muestra cada posición
  for (int i = 0; i < texto.length() + 16; i++) {
    lcd.clear();
    lcd.setCursor(i, 0);
    lcd.print(texto);
    delay(300);
  }
}
