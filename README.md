# JuegoGrupo4

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
