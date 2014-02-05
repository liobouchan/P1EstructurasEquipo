/*!
 *  \mainpage Practica manejoArreglosyCadenas
 *  \author -Martinez Miranda Erubey Gustavo\n
            -Juarez Bouchan Jose Leonardo\n
            -Rodriguez Rosas Daniel\n  
 *  \date 30 de enero de 2014    
   @file ejercicio8parte2inciso1.c
   @brief Este codigo permite concatenar dos cadenas de caracteres
   @version 1.0
   @date Creado el 30 de enero de 2014 por alumnos del grupo 1CV4
*/
#include <stdio.h>

void concatenar(char* cad1,char* cad2){
	int i,j;
	char resultado[100];
	for(i=0;cad1[i]!='\0';i++){
		resultado[i]=cad1[i];
	}
	for(j=0;cad2[j]!='\0';j++){
		resultado[i]=cad2[j];
		i++;
	}
	printf("La cadena concatenada es: ");
	puts(resultado);
}


int main(){
	char cadena1[100],cadena2[100],*ptr1,*ptr2;
	puts("Escribe la primera cadena");
	gets(cadena1);
	puts("Escribe la segunda cadena");
	gets(cadena2);
	ptr1=cadena1;
	ptr2=cadena2;
	concatenar(ptr1,ptr2);

}

