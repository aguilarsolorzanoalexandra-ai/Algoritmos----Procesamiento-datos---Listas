//Cargar lista manual
#define MAX_SIZE 100

int lista[MAX_SIZE];
int N;

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("EJERCICIO 1 - CARGAR LISTA MANUAL");
}

void loop() {
  Serial.println("Ingrese tamaño de la lista:");
  while (Serial.available() == 0);
  N = Serial.parseInt();

  if (N <= 0 || N > MAX_SIZE) {
    Serial.println("Tamaño inválido");
    while(true);
  }

  for (int i = 0; i < N; i++) {
    Serial.print("Valor ");
    Serial.print(i);
    Serial.print(": ");
    while (Serial.available() == 0);
    lista[i] = Serial.parseInt();
  }

  Serial.println("Lista cargada correctamente.");
  while(true);
}
