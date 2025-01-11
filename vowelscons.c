#include <stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){

    char str[100];
    int vowels = 0, consonant = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if(isalpha(ch))
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u')
            {
                vowels++;
            }
            else
            {
                consonant++;
            }
        }
    }

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d", consonant);

    return 0;
}