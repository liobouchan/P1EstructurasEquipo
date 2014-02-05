/*!
 *  \mainpage Practica 1
 *  \author -Juárez Bouchan José Leonardo\n
            -Martínez Miranda Erubey Gustavo\n
            -Rodríguez Rosas Daniel Arturo\n  
 *  \date 1 de Enero del 2014  
   @date Creado el 1 de Enero del 2014 por alumnos del grupo 1CV4
*/
#include <stdio.h>//Libreria principal

//Declarando la funcion que nos devolverá el promedio
float obtenerPromedio(int*valores, int posicion) {

//Declarando variables que usaremos para el cálculo del promedio
  int i;
  float suma = 0.0;

//Este For nos ayuda a que recorra el arreglo y sumar cada dato a la variable suma
  for (i = 0; i < posicion; ++i)
    suma += valores[i];

  return suma / (float) posicion;
}

int main() {
//Declarando las variables que vamos a usar en nuestro main
  int numeros[10];
  char opcion[3];
  int n, i,*ptr;

    //Le vamos a pedir al usuario que nos diga de cuantos numeros quiere el arreglo
    printf("Cuantas posiciones tiene el arreglo? ");
    scanf("%d", &n);

    //Este for recibe los valores que el usuario quiera poner en el arreglo.
    for (i = 0; i < n; ++i) {
      printf("  Posición %d: ", i + 1);
      scanf("%d", &numeros[i]);
    }
    ptr=numeros;
    //Imprimir el promedio haciendo uso de la funcion antes declarada
    printf("El promedio del arreglo es %.1f\n", obtenerPromedio(ptr, n));

    return 0;
}