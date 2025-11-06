/* Task description:
Write a program that asks the user to enter a word, stores it in a string, and prints it letter by letter vertically. For example if you give „Word”, the result should be:

W
o
r
d

You can assume that the word is never longer than 99 characters.

*/


#include <stdio.h>

int main(void){

  char str[100];

  printf("Enter a word(max length is 99)!\n");
  scanf("%s", str);

  for (int i= 0; str[i] != '\0'; i++){
    printf("%c", str[i]);
    printf("\n");
  }

  return 0;
}
