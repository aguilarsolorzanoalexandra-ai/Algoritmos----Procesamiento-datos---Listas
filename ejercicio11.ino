//ELIMINAR DUPLICADOS
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


void mostrarLista(int *lista) {
  Serial.println("Lista sin duplicados:");
  for (int i = 0; i < N; i++)
    Serial.println(lista[i]);
}

void eliminarDuplicados(int *lista, int N) {
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if (lista[i] == lista[j]) {
        for (int k = j; k < N - 1; k++) {
          lista[k] = lista[k + 1];
        }
        N--;
        j--;
      }
    }
  }
}
void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("EJERCICIO 11 - ELIMINAR DUPLICADOS");
}

void loop() {
  cargarLista(lista);
  eliminarDuplicados(lista);
  mostrarLista(lista);
  while (true);
}
