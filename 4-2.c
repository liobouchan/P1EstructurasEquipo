/*!
 *  \mainpage Practica 1
 *  \author -Juárez Bouchan José Leonardo\n
            -Martínez Miranda Erubey Gustavo\n
            -Rodríguez Rosas Daniel Arturo\n  
 *  \date 1 de Enero del 2014  
   @date Creado el 1 de Enero del 2014 por alumnos del grupo 1CV4
*/
#include <stdio.h>//Libreria Principal
#include <string.h>

//Declaracion de Prototipos
int validarPalindroma( char cad[] );

int validarPalindroma( char cad[]){
  int i,j; //Variables que usaremos para comparar
  int palindromo = 1; //Variable declarada con 1 en caso de que si sea palindromo

  j=strlen(cad)-1;
  //Compararemos letra por letra para ver que coincidan
  for(i=0; i<strlen(cad)/2; i++, j--) {
    printf("Comprobando %c==%c\n", *(cad+i), *(cad+j));
    //Si las letras no coinciden asignamos a un 0 a palindromo
    if (*(cad+i)!=*(cad+j)) {
      palindromo = 0;
      break;
    }
  }
  //Imprimimos el resultado
  if (palindromo)
    printf("\nEs un palindrimo.\n");
  else
    printf("\nNo es un palindrimo.\n");
}

int main(){
  char cad[20]; //Variable para guardar lo que el usuario ingresa

  //Pedimos al usuario que ingrese la cadena y lo guardamos
  printf("Escribe una cadena: ");
  fflush(stdout);
  gets(cad);
  //Mandamos la cadena guardada ala funcion que nos valida el palindromo
  validarPalindroma(cad);

  return (0);
}