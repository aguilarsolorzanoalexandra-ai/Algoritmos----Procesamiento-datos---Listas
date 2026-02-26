//Mostrar lista
#define MAX_SIZE 100

int lista[MAX_SIZE];
int N;

void cargarLista(int *lista) {
  Serial.println("Ingrese tamaño de la lista:");
  while (Serial.available() == 0);
  N = Serial.parseInt();

  for (int i = 0; i < N; i++) {
    while (Serial.available() == 0);
    lista[i] = Serial.parseInt();
  }
}

void mostrarLista(int *lista) {
  Serial.println("Contenido de la lista:");
  for (int i = 0; i < N; i++)
    Serial.println(lista[i]);
}

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("EJERCICIO 3 - MOSTRAR LISTA");
}

void loop() {
  cargarLista(lista);
  mostrarLista(lista);
  while (true);
}
