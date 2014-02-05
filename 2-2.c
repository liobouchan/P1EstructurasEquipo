/*!
 *  @file 2-2.c
 *  @brief This program swap all the occurrences of a character in an string.
 *  @author 
      Name:     Rodriguez Rosas Daniel Arturo
      Twitter:  @ardroz
 *  @date 02/02/2014
 *  @version 1.0
*/

#include <stdio.h>

/*
 * Function: swapOccurences
 * --------------------
 * Swaps all the occurrences of the to_change char in the string, the new char is
 * defined by the user.
 *
 *  *char[int]: Pointer to the string
 *  to_change[int]: Real value to be swapped.
 *
 *  returns: The number of occurrences.
 */
int swapOccurrences( char *string, char to_change );

int main() {
  char string[100];
  char to_change = ' ';
  int times = 0;
  gets( string );

  printf("Ingresa el caracter a cambiar: ");
  scanf( "%c", &to_change );
  setbuf(stdin,NULL);

  times = swapOccurrences( string, to_change );
  printf("%s \n", string);
  
  printf("%d ocurrencias\n", times);
  return 0;
}

int swapOccurrences( char *string, char to_change ) {
  int i = 0,
      counter = 0;
  char to = ' ';

  printf("Cambiar por: ");
  scanf( "%c", &to );

  while ( string[i] ) {
    if ( string[i] == to_change ) {
      string[i] = to;
      counter++;
    }
    i++;
  }
  return counter;
}