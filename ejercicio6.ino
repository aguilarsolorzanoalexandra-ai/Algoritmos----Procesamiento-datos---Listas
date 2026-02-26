//INTERCAMBIAR DOS POSICIONES
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

void intercambiar(int *lista, int M, int Q) {
  if (M >= 0 && M < N && Q>= 0 && Q< N) {
    int temporal = lista[M];
    lista[M] = lista[Q];
    lista[Q] = temporal;
  }
}

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("EJERCICIO 6 - INTERCAMBIAR");
}

void loop() {
  cargarLista(lista);
  mostrarLista(lista);

  Serial.println("Ingrese primera posicion:");
  while (Serial.available() == 0);
  int M = Serial.parseInt();

  Serial.println("Ingrese segunda posicion:");
  while (Serial.available() == 0);
  int q = Serial.parseInt();

  intercambiar(lista, M, Q);

  mostrarLista(lista);
  while (true);
}
