/*!
 *  \mainpage Practica manejoArreglosyCadenas
 *  \author -Martinez Miranda Erubey Gustavo\n
            -Juarez Bouchan Jose Leonardo\n
            -Rodriguez Rosas Daniel\n  
 *  \date 30 de enero de 2014    
   @file ejercicio5parte1.c
   @brief Este codigo permite realizar la multiplicacion de matrices nxn
   @version 1.0
   @date Creado el 30 de enero de 2014 por alumnos del grupo 1CV4
*/
#include <stdio.h>
int longitud;
void multiplicarMatrices(int matriz1[longitud][longitud], int matriz2[longitud][longitud], int matrizResultado[longitud][longitud]){
	int i,j,k,l;
	for(i=0;i<longitud;i++){
		for(j=0;j<longitud;j++){
			for(k=0;k<longitud;k++){
			matrizResultado[j][i]=matrizResultado[j][i]+(matriz1[j][k]*matriz2[k][i]);
			}
		}
	}
	puts("La matriz resultante es:");
	for(i=0;i<longitud;i++){
		for(j=0;j<longitud;j++){
			printf("%d   ",matrizResultado[i][j]);
		}
		printf("\n");
	}
}

int main(){
	printf("Escribe que la dimension que van a tener las matrices\n");
	scanf("%d",&longitud);
	setbuf(stdin,NULL);
	int matriz1[longitud][longitud],i,j;
	for(i=0;i<longitud;i++){
		printf("Introduce la fila %d\n", i+1);
		for(j=0;j<longitud;j++){
			scanf("%d",&matriz1[i][j]);
			setbuf(stdin,NULL);
		}
	}
	int matriz2[longitud][longitud];
	puts("Escribe la segunda matriz");
	for(i=0;i<longitud;i++){
		printf("Introduce la fila %d\n", i+1);
		for(j=0;j<longitud;j++){
			scanf("%d",&matriz2[i][j]);
			setbuf(stdin,NULL);
		}
	}
	int matrizR[longitud][longitud];
	for(i=0;i<longitud;i++){
		for(j=0;j<longitud;j++){
			matrizR[i][j]=0;
		}
	}
	
	
	multiplicarMatrices(matriz1,matriz2,matrizR);
}

