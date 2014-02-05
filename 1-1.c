/*!
 *  @file 1-1.c
 *  @brief This program swap all the occurrences of a value in an integer array 
    that is defined by the user (The array and the values).
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
 * Swaps all the occurrences of the to_change int in the array, the new value is
 * defined by the user.
 *
 * Note: the values must be diferent to 0.
 *
 *  *array[int]: Pointer to the first element of the array that contains all the
 *    integers to be evaluated.
 *  to_change[int]: Real value to be swapped.
 *
 *  returns: An integer with the number of the occurrences swapped.
 */
int swapOccurences ( int *array, int to_change );

int main() {
  int array_length = 0,
      i = 0,
      to_change = 0,
      changed = 0;

  printf("Ingresa la longitud del arreglo: ");
  scanf( "%d", &array_length );

  int array [array_length];

  for ( i = 0; i < array_length; i++ ) {
    printf( "array[%d]: ", i );
    scanf( "%d", &array[i] );
  }

  /*! Assigns 0 to the next value of the array, when using the loop it will 
   *  break it.
   */
  array[i] = 0;

  printf("Ingresa el número a cambiar: ");
  scanf( "%d", &to_change );

  changed = swapOccurences( array, to_change );

  printf("Se modificaron %d ocurrencias.\n", changed);

  for ( i = 0; i < array_length; i++ ) {
    printf( "array[%d]: %d\n", i, array[i] );
  }
  return 0;
}

int swapOccurences ( int *array, int to_change ) {
  int i = 0,
      changeTo = 0,
      counter = 0;

  printf("Cambiar por: ");
  scanf( "%d", &changeTo );

  while ( array[i] ) {
    if ( *(array + i) == to_change ) {
      *(array + i) = changeTo;
      counter++;
    }
    i++;
  }

  return counter;
}