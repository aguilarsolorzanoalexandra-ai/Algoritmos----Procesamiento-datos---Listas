//VALOR MAX
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

int obtenerMaximo(int *lista, int N) {
  int max = lista[0];
  for (int i = 1; i < N; i++)
    if (lista[i] > max)
      max = lista[i];
  return max;
}

void mostrarLista(int *lista) {
  for (int i = 0; i < N; i++)
    Serial.println(lista[i]);
}

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("EJERCICIO 9 - MAXIMO");
}

void loop() {
  cargarLista(lista);
  mostrarLista(lista);

  Serial.print("Valor maximo: ");
  Serial.println(obtenerMaximo(lista));

  while (true);
}
