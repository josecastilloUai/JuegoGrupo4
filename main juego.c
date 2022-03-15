void puente(int intento, int lado)
{
  // Procedimiento que solicita 2 números, el número de intento del juego, y el lado elegido por el jugador (0 o 1). Se genera el puente, el cual es una matriz de caracteres. Luego mediante un ciclo anidado se imprime la posición del jugador, dependiendo de los parametros dados.
  
  char *puente[11][6] = {{"[", " ", "]", "[", " ", "]"},
  {"[", " ", "]", "[", " ", "]"},
  {"[", " ", "]", "[", " ", "]"},
  {"[", " ", "]", "[", " ", "]"},
  {"[", " ", "]", "[", " ", "]"},
  {"[", " ", "]", "[", " ", "]"},
  {"[", " ", "]", "[", " ", "]"},
  {"[", " ", "]", "[", " ", "]"},
  {"[", " ", "]", "[", " ", "]"},
  {"[", " ", "]", "[", " ", "]"},
  {"[", " ", "]", "[", " ", "]"}};

  int a;
  if (lado==0){
    a = 1;
  }
  else {
    a = 4;
  }
  
  int i;
  int j;
  
  for (i = 0; i < 11; i++) {
    for (j = 0; j < 6; j++){
      puente[11-intento][a] = "O";
      printf("%s", puente[i][j]);
    }
    
    printf("\n");
  };
  printf("\n");
}

int main() {

  Menu();

  // Solicita el nombre del jugador
  char nombre[30];
  printf("Ingresa tu nombre (solo una palabra): ");
  scanf("%s", nombre);
  
  bienvenida(nombre);

  int k;
  int n;
  n = 0;
  for (k=1; k < 12; k++) {
    puente(k,n);
    srand(time(NULL));
  
    int numero_random;
    numero_random = random1();
    //printf("%d", number);

    if (k == 11){
      victoria();
      break;
    }
    
    int opcion_usuario;
    printf("Ingresa una opción: ");
    scanf("%d", &opcion_usuario);
    
    ganador(opcion_usuario, numero_random);
    n = opcion_usuario;
    if (opcion_usuario!=numero_random){
      break;
    }
    
  }
  
  return 0;
}
