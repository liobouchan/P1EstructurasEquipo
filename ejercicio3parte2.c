/*!
 *  \mainpage Practica manejoArreglosyCadenas
 *  \author -Martinez Miranda Erubey Gustavo\n
            -Juarez Bouchan Jose Leonardo\n
            -Rodriguez Rosas Daniel\n  
 *  \date 30 de enero de 2014    
   @file ejercicio3parte2.c
   @brief Este codigo permite contar las veces que una letra se repite en una cadena y sustituirla por otra
   @version 1.0
   @date Creado el 30 de enero de 2014 por alumnos del grupo 1CV4
*/
#include <stdio.h>
#include <stdlib.h>

int cambiarOcurrencias(char *cad, char letra){
	int i,j=0;
	for(i=0;cad[i]!='\0';i++){
		if(cad[i]==letra){
			cad[i]='?';
			j++;
		}
	}
	return j;
}
/*!
 *  \fn main
 *  \brief 
 */
int main(){
	char cadena[100], letra, *ptr;
	puts("Escribe una cadena");
	gets(cadena);
	puts("Escribe la letra que hay que cambiar");
	scanf("%c",&letra);
	setbuf(stdin,NULL);
	ptr=cadena;
	int numero=cambiarOcurrencias(ptr,letra);
	printf("Se cambiaron %d ocurrencias.\n",numero);
	puts(cadena);
}


