//BUSCAR VALOR
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

int buscarValor(int *lista, int valor, int N) {
  for (int i = 0; i < N; i++)
    if (lista[i] == valor)
      return i;
  return -1;
}

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("EJERCICIO 7 - BUSCAR VALOR");
}

void loop() {
  cargarLista(lista);
  mostrarLista(lista);

  Serial.println("Ingrese valor a buscar:");
  while (Serial.available() == 0);
  int valor = Serial.parseInt();

  int pos = buscarValor(lista, valor);

  if (pos == -1)
    Serial.println("No encontrado");
  else {
    Serial.print("Encontrado en posicion: ");
    Serial.println(pos);
  }

  while (true);
}
