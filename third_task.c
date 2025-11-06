/* Task description:
Write a program, that first asks the user the number of real values to read; then it reads the values into a dynamically allocated array. 
At the end the program should print the elements of the array backwards, and release the allocated memory!
*/


#include <stdio.h>
#include <stdlib.h>

int main(void){

  double *array;

  printf("Enter how many numbers want to print\n");
  int n;
  scanf("%d", &n);

  array = (double*)malloc(n*sizeof(double));

  if(array == NULL){
    return 1;
  }

  for (int i = 0; i<n; i++){
    scanf("%lf", &array[i]);
  }

  for (int i = n-1; i>=0; i--){
    printf("%lf\n", array[i]);
  }
  printf("\n");

  free(array);

  return 0;
}
