#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2); // Inicializa la pantalla LCD con 16 columnas y 2 filas
  lcd.setCursor(0, 0); // Establece el cursor en la primera fila, primera columna
  lcd.print("Ingrese codigo"); // Muestra el mensaje en la primera fila

  delay(500); // Espera medio segundo

  // Establece el cursor en la segunda fila, primera columna, y activa el cursor subrayado
  lcd.setCursor(0, 1);
  lcd.cursor();
  lcd.blink();

  delay(500); // Espera medio segundo
}

void loop() {
  // Tu código aquí
}
