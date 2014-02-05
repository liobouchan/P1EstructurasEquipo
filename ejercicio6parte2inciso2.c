/*!
 *  \mainpage Practica manejoArreglosyCadenas
 *  \author -Martinez Miranda Erubey Gustavo\n
            -Juarez Bouchan Jose Leonardo\n
            -Rodriguez Rosas Daniel\n  
 *  \date 30 de enero de 2014    
   @file ejercicio6parte2inciso2.c
   @brief Este codigo permite obtener el numero de caracteres que se encuentran en una cadena
   @version 1.0
   @date Creado el 30 de enero de 2014 por alumnos del grupo 1CV4
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*!
 *  \fn main
 *  \brief Se obtiene a traves de la funcion strlen(); de la libreria string.h la cantidad de caracteres en una cadena
 */
int main(){

	char cadena[100];
	int length;
	puts("Escriba una cadena de caracterres");
	gets(cadena);
	length=strlen(cadena);
	printf("La cadena tiene %d caracteres",length);

}

