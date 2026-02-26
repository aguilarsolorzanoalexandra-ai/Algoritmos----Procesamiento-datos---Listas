//INVERTIR LISTA
#define MAX_SIZE 100 //es el tamaño máximo de números 

int pLista[MAX_SIZE]; 
int N;                

void cargarLista(int *lista) {
  Serial.println("introduzca el tamaño de la lista (N):");

  while (Serial.available() == 0);  
  N = Serial.parseInt();

  if (N <= 0 || N > MAX_SIZE) {
    Serial.println("tamaño invalido");
    return;
  }

  Serial.print("El tamaño de la lista es: ");
  Serial.println(N);
  Serial.println("Introduzca los valores de la lista:");

  for (int i = 0; i < N; i++) {
    while (Serial.available() == 0);  
    lista[i] = Serial.parseInt();
    Serial.print("Valor ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.println(lista[i]);
  }

  Serial.println("Lista cargada");
}

void mostrarLista(int *lista) {
  Serial.println("Contenido de la lista:");
  for (int i = 0; i < N; i++) {
    Serial.print("Valor ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.println(lista[i]);
  }
  
}
void invertirLista(int *lista) {
  for (int i = 0; i < N / 2; i++) {
    int temp = lista[i];
    lista[i] = lista[N - 1 - i];
    lista[N - 1 - i] = temp;
  }
  Serial.println("Lista invertida");

}
void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("PROGRAMA DE LISTA INVERTIDA");
 
}

void loop() {
  
  cargarLista(pLista);

  mostrarLista(pLista);
  delay(1000);

  Serial.println("Proceso completo");
  while (true); 
}

}
