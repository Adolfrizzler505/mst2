#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char str[100];
    int words = 0;
    int inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for( int i = 0; str[i] != '\0'; i++)
    {
        if(isspace(str[i])) //isspace inbuilt function in lib ctype.h used to know if there is space present
        {
            inWord = 0;
        }
        else if(inWord == 0)
        {
            inWord = 1;
            words++;
        }
    }

    printf("Total words: %d", words);


    return 0;
}