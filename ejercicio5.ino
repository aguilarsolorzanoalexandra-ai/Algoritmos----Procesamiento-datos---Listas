// MODIFICAR POSICIÓN
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
  Serial.println("Lista actual:");
  for (int i = 0; i < N; i++)
    Serial.println(lista[i]);
}

void modificarPosicion(int *lista, int M, int nuevoValor) {
  if (M >= 0 && M < N)
    lista[M] = nuevoValor;
}

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("EJERCICIO 5 - MODIFICAR POSICION");
}

void loop() {
  cargarLista(lista);
  mostrarLista(lista);

  Serial.println("Ingrese posicion a modificar:");
  while (Serial.available() == 0);
  int M = Serial.parseInt();

  Serial.println("Ingrese nuevo valor:");
  while (Serial.available() == 0);
  int nuevo = Serial.parseInt();

  modificarPosicion(lista, M, nuevo);

  mostrarLista(lista);
  while (true);
}
