//PROMEDIO
#define MAX_SIZE 100

int lista[MAX_SIZE];
int N;

void cargarLista(int *lista) {
  Serial.println("Ingrese tamaño:");
  while (Serial.available() == 0);
  N = Serial.parseInt();

  for (int i = 0; i < N; i++) {
    while (Serial.available() == 0);
    lista[i] = Serial.parseInt();
  }
}

float promedioLista(int *lista) {
  float suma = 0;
  for (int i = 0; i < N; i++)
    suma += lista[i];
  return suma / N;
}

void mostrarLista(int *lista) {
  for (int i = 0; i < N; i++)
    Serial.println(lista[i]);
}

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("EJERCICIO 10 - PROMEDIO");
}

void loop() {
  cargarLista(lista);
  mostrarLista(lista);

  Serial.print("Promedio: ");
  Serial.println(promedioLista(lista));

  while (true);
}
