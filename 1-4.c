/*!
 *  @file 1-4.c
 *  @brief Implements the quicksort.
 *  @author
      Name:     Rodriguez Rosas Daniel Arturo
      Twitter:  @ardroz
 *  @date 02/02/2014
 *  @version 1.0
*/

#include <stdio.h> 

/*
 *  Function: qs
 *  --------------------
 *  Applies a quicksort to a subset of an array, defines the pivot in the middle
      of the array.
 *
 *  *array[int]: Pointer to the first element of the array.
 *  left_limit[int]: Left limit to evaluate against the pivot.
 *  right_limit[int]: Right limit to evaluate against the pivot.
 *  
 *  returns: An integer with the number of the occurrences swapped.
 */
void qs( int array[], int left_limit, int right_limit) {
    int left,
        right,
        temporal,
        pivot;

    left = left_limit;
    right = right_limit;
    pivot = array[(left+right)/2];

    do {
      while( array[left] < pivot && left < right_limit ) left++;
      while( pivot < array[right] && right > left_limit) right--;
      if ( left <= right ) {
        temporal = array[left];
        array[left] = array[right];
        array[right] = temporal;
        left++;
        right--;
      }
    } while( left <= right );
    if ( left_limit < right ) {
      qs( array, left_limit, right);
    }
    if( right_limit > left ) {
      qs( array, left, right_limit );
    }
}

void quicksort( int array[], int n) {
  qs( array, 0, n - 1);
}

int main(int argc, const char * argv[]) {
  int array_length = 0,
      i = 0;

  printf("Ingresa la longitud del arreglo: ");
  scanf( "%d", &array_length );

  int array [array_length];

  for ( i = 0; i < array_length; i++ ) {
    printf( "array[%d]: ", i );
    scanf( "%d", &array[i] );
  }

  quicksort( array, array_length );

  printf("Lista Ordenada \n");
  for ( i = 0; i < array_length; i++ ) {
      printf( "%d", array[i] );
      if( i < array_length - 1 ){
        printf(",");
      }
  }

  return 0;
}