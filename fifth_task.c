/* Task description:
Write a program that opens a text file and breaks all lines wider than 20 charaters. The output should be written to "output2.txt".

To test the program, use lorem.txt! Check the result!

*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
  FILE *in;
  FILE *out;

  int MAX_LINE = 1024;
  int MAX_WIDTH = 20;
  char line[MAX_LINE];

  in = fopen("lorem.txt", "r");
  out = fopen("output2.txt", "w");

  if (in == NULL || out == NULL){
    printf("Error in opening file\n");
    return 1;
  }

  while (fgets(line, sizeof(line), in)){
    int len = strlen(line);

    if(len >0 && line[len-1] == '\n'){
      line[len-1] = '\0';
      len--;
    }

    for(int i = 0; i < len; i = i + MAX_WIDTH){
      fprintf(out, "%.20s\n", line + i);
    }
  }

  fclose(in);
  fclose(out);


  return 0;
}
