// OBTENER VALOR EN POSICIÓN M
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
  for (int i = 0; i < N; i++)
    Serial.println(lista[i]);
}

int obtenerValor(int *lista, int M) {
  if (M < 0 || M >= N)
    return -1;
  return lista[M];
}

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("EJERCICIO 4 - OBTENER POSICION");
}

void loop() {
  cargarLista(lista);
  mostrarLista(lista);

  Serial.println("Ingrese posicion M:");
  while (Serial.available() == 0);
  int M = Serial.parseInt();

  int valor = obtenerValor(lista, M);

  if (valor == -1)
    Serial.println("Posicion invalida");
  else {
    Serial.print("Valor en posicion ");
    Serial.print(M);
    Serial.print(": ");
    Serial.println(valor);
  }

  while (true);
}
