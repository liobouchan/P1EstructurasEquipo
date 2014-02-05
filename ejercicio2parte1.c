/*!
 *  \mainpage Practica manejoArreglosyCadenas
 *  \author -Martinez Miranda Erubey Gustavo\n
            -Juarez Bouchan Jose Leonardo\n
            -Rodriguez Rosas Daniel\n  
 *  \date 30 de enero de 2014    
   @file ejercicio2parte1.c
   @brief Este codigo permite encontrar el minimo y el maximo valor que hay en un arreglo de enteros
   @version 1.0
   @date Creado el 30 de enero de 2014 por alumnos del grupo 1CV4
*/
#include <stdio.h>
#include <stdlib.h>
int longitud;

int* escribir_arreglo(){
	int i=0;
	int *ptr;
	printf("Escribe que longitud va a tener el arreglo\n");
	scanf("%d",&longitud);
	setbuf(stdin,NULL);
	int arr[longitud];
	printf("Escribe los numeros enteros que va a contener el arreglo\n");
	while(i<longitud){
		scanf("%d",&arr[i]);
		setbuf(stdin,NULL);
		i++;
	}
	ptr=arr;
	return ptr;
}

int encontraMenor(int* p){
	int j,k,control;
	for(j=0;j<longitud;j++){
		for(k=0;k<longitud;k++){
			if(p[j]>p[k]){
				control=0;
				break;
			}else{
				control=1;
			}
		}
		if(control==1){
			
			break;
		}
	}
	int resultado=p[j];
	
	return resultado;
}

int encontraMayor(int* p){
	int j,k,control;
	for(j=0;j<longitud;j++){
		for(k=0;k<longitud;k++){
			if(p[j]<p[k]){
				control=0;
				break;
			}else{
				control=1;
			}
		}
		if(control==1){
			
			break;
		}
	}
	int resultado=p[j];
	
	return resultado;
}


int main(){
 int *puntero=escribir_arreglo();
 int respuesta1=encontraMenor(puntero);
 int respuesta2=encontraMayor(puntero);
 printf("El valor menor es: %d \n",respuesta1);
 printf("El valor mayor es: %d \n",respuesta2);
 
}

