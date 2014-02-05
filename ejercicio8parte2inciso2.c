/*!
 *  \mainpage Practica manejoArreglosyCadenas
 *  \author -Martinez Miranda Erubey Gustavo\n
            -Juarez Bouchan Jose Leonardo\n
            -Rodriguez Rosas Daniel\n  
 *  \date 30 de enero de 2014    
   @file ejercicio8parte2inciso2.c
   @brief Este codigo permite concatenar dos cadenas de caracteres con la funcion strcat() de la libreria string.h
   @version 1.0
   @date Creado el 30 de enero de 2014 por alumnos del grupo 1CV4
*/
#include <stdio.h>
#include <string.h>

int main(){
	char cadena1[100],cadena2[100],*ptr1,*ptr2;
	puts("Escribe la primera cadena");
	gets(cadena1);
	puts("Escribe la segunda cadena");
	gets(cadena2);
	ptr1=cadena1;
	ptr2=cadena2;
	char* resultado=strcat(ptr1,ptr2);
	printf("La cadena concatenada es: ");
	puts(resultado);

}

