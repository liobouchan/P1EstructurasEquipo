/*!
 *  \mainpage Practica manejoArreglosyCadenas
 *  \author -Martinez Miranda Erubey Gustavo\n
            -Juarez Bouchan Jose Leonardo\n
            -Rodriguez Rosas Daniel\n  
 *  \date 30 de enero de 2014    
   @file ejercicio6parte2inciso1.c
   @brief Este codigo permite obtener el numero de caracteres que se encuentran en una cadena
   @version 1.0
   @date Creado el 30 de enero de 2014 por alumnos del grupo 1CV4
*/
#include <stdio.h>
#include <stdlib.h>

/*!
 *  \fn contar
 *  \brief este es el algoritmo que obtiene la cantidad de caracteres de una cadena dada
	Descripcion: para esta funcion se recibe la cadena a traves de un apuntador, el cual se
	comporta muy parecido a la cadena solo que no ocupa espacio en memoria. Posteriormente 
	este apuntador se somete a un ciclo, el cual va pasando por cada uno de los valores del arreglo
	y por cada valor por el que pasa aumenta el valor de una variable contadora hasta que el ciclo
	encuentra el caracter de fin de cadena y finaliza y retorna el valor de la variable contadora.
 */
int contar(char *cad){
	int i;
	while(cad[i]!='\0'){
		i++;
	}
	return i;
}

/*!
 *  \fn main
 *  \brief imprime en pantalla el valor de la cantidad de caracteres de una cadena dada.
 */
int main(){
	char cadena[100],*cad;
	int conteo;
	puts("Escriba una cadena de caracterres");
	gets(cadena);
	cad=cadena;
	conteo=contar(cad);
	printf("La cadena tiene %d caracteres",conteo);

}
