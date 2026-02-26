// Carga aleatoria
#define MAX_SIZE 100

int lista[MAX_SIZE];
int N;

void cargarListaRandom(int *lista) {
  Serial.println("Ingrese tamaño de la lista:");
  while (Serial.available() == 0);
  N = Serial.parseInt();

  if (N <= 0 || N > MAX_SIZE) {
    Serial.println("Tamaño inválido");
    return;
  }

  for (int i = 0; i < N; i++) {
    lista[i] = random(1, 21);
  }

  Serial.println("Lista generada aleatoriamente.");
}

void mostrarLista(int *lista) {
  Serial.println("Contenido de la lista:");
  for (int i = 0; i < N; i++)
    Serial.println(lista[i]);
}

void setup() {
  Serial.begin(9600);
  while (!Serial);
  randomSeed(analogRead(A0));
  Serial.println("EJERCICIO 2 - LISTA RANDOM");
}

void loop() {
  cargarListaRandom(lista);
  mostrarLista(lista);
  while (true);
}
