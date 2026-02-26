//Cargar lista manual
#define MAX_SIZE 100

int lista[MAX_SIZE];
int N;

void cargarLista(int *lista) {
  Serial.println("Ingrese tamaño de la lista:");
  while (Serial.available() == 0);
  N = Serial.parseInt();

  if (N <= 0 || N > MAX_SIZE) {
    Serial.println("Tamaño inválido");
    return;
  }

  for (int i = 0; i < N; i++) {
    Serial.print("Valor ");
    Serial.print(i);
    Serial.print(": ");
    while (Serial.available() == 0);
    lista[i] = Serial.parseInt();
  }

  Serial.println("Lista cargada correctamente.");
}

void mostrarLista(int *lista) {
  Serial.println("Contenido de la lista:");
  for (int i = 0; i < N; i++) {
    Serial.println(lista[i]);
  }
}

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("EJERCICIO 1 - CARGAR LISTA");
}

void loop() {
  cargarLista(lista);
  mostrarLista(lista);
  while (true);
}
