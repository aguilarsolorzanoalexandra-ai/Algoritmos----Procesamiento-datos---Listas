//ORDENAR DE FORMA ASCENDENTE
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

void ordenarLista(int *lista) {
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      if (lista[j] > lista[j + 1]) {
        int aux = lista[j];
        lista[j] = lista[j + 1];
        lista[j + 1] = aux;
      }
    }
  }
}

void mostrarLista(int *lista) {
  Serial.println("Lista ordenada:");
  for (int i = 0; i < N; i++)
    Serial.println(lista[i]);
}

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("EJERCICIO 13 - ORDENAR LISTA");
}

void loop() {
  cargarLista(lista);
  ordenarLista(lista);
  mostrarLista(lista);
  while (true);
}
