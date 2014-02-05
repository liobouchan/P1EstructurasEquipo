/*!
 *  \mainpage Practica 1
 *  \author -Juárez Bouchan José Leonardo\n
            -Martínez Miranda Erubey Gustavo\n
            -Rodríguez Rosas Daniel Arturo\n  
 *  \date 1 de Enero del 2014  
   @date Creado el 1 de Enero del 2014 por alumnos del grupo 1CV4
*/
#include <stdio.h>//Libreria Principal
#include <stdlib.h>
#include <string.h>

//Declaracion de Prototipos
void copiarApuntador (char*,char*);
void copiarString (char* , char*);

int main(){
  //Declarando los apuntadores a utilizar
  char *c1, *c2;
 
  c1=(char*)malloc(20*sizeof(char));
  c2=(char*)malloc(20*sizeof(char));

  //En caso de que no nos den ningun valor devolveremos un falso
  if ((c1==NULL)||(c2==NULL)){
    printf ("Error de menu");
    exit (-1);
  }

//Pedimos una cadena de caracteres y la guardamos en la variable antes declarada
  printf ("introduce una cadena: ");
  gets (c1);

//Vamos a copiar las cadenas con las bondades de los punteros e imprimirlos
  copiarApuntador (c1,c2);
  printf("Con Operaciones de Punteros %s\n",c2);

//Copiamos las cadenas con las propiedades de la libreria String
  copiarString (c1,c2);
}

//Siempre que el apuntador NO sea nulo lo copiaremos a el otro apuntador
void copiarApuntador (char *c1, char *c2){
  while(*c1 != '\0'){
    *c2++ = *c1++;
  }
}

//Funcion que nos permite copiar los valores de una variable a otra.
void copiarString (char *c1, char *c2){
  strcpy (c2 , c1);
  printf("Con operaciones String %s\n", c2 );
}