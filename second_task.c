/* Task description:
It is a common task to remove leading and trailing spaces from a string. This function is often called trim().

Write a function that removes the spaces from the beginning and from the end of a string (other spaces must stay)! 
For example if the original string is "  Hi, what's up?   ", then the new string should be "Hi, what's up?". 
The function should take two parameters: a source array (containing the original string) and a destination array (to put the trimmed string into). 
You can assume that the destination array is long enough for the resulting string.


Hint: 1) First find (and remember) the first non-space character from the beginning of the string, 2) then find the end of the string, 3) and starting from there find the first non-space character backwards (the last one in the string). These two positions identify the segment of the string to copy. After copying into destination, do not forget to terminate the destination string.

Write a short program, too, that calls this function and demonstrates that it operates correctly!

Modify your function to allocate space for the trimmed string! What is the difference in calling? Why the resulted string still "alive" outside the function? (Do not forget to erase the memory allocation!)

*/


#include <stdio.h>
#include <string.h>

char* trimString(char str[], char trim[]){

    int first_position = 0;
    while (str[first_position] == ' '){
        first_position++;
    }

    int len = 0;
    for(int j = 0; str[j] != '\0'; j++){
        len++;
    }

    int last_position = len-1;
    while (str[last_position] == ' '){
        last_position--;
    }

    int len_trim = 0;
    for(int i=first_position; i<=last_position; i++){
        trim[len_trim++] = str[i];
    }
    trim[len_trim] = '\0';

    return trim;
}


int main(void){
    char str[] = " Hello world!   ";
    char trim[100];
    trimString(str, trim);
    printf("The new string: %s\n", trim);

    return 0;
}
