const int redPin = 9;    // Pin para el componente rojo del LED RGB
const int greenPin = 10; // Pin para el componente verde del LED RGB
const int bluePin = 11;  // Pin para el componente azul del LED RGB
const int tiempoEspera = 5; // Tiempo de espera en milisegundos entre cada iteración

void setup() {
  // Configurar los pines como salidas
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

// Función para cambiar gradualmente un componente de color
void cambioGradual(int pin, int inicio, int fin, int paso) {
  for (int i = inicio; i <= fin; i += paso) {
    analogWrite(pin, i);
    delay(tiempoEspera);
  }
}

void loop() {
  // Cambiar gradualmente el componente rojo de 0 a 255 y luego de 255 a 0
  cambioGradual(redPin, 0, 255, 1);
  cambioGradual(redPin, 255, 0, -1);

  // Cambiar gradualmente el componente verde de 0 a 255 y luego de 255 a 0
  cambioGradual(greenPin, 0, 255, 1);
  cambioGradual(greenPin, 255, 0, -1);

  // Cambiar gradualmente el componente azul de 0 a 255 y luego de 255 a 0
  cambioGradual(bluePin, 0, 255, 1);
  cambioGradual(bluePin, 255, 0, -1);
}
