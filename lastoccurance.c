#include <stdio.h>
#include<string.h>

int main(){

    char name[100], ch;
    int i, pos = -1;

    printf("Enter a string: ");
    fgets(name, 100, stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Enter the character to find the last occurance: ");
    scanf("%c", &ch);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ch){
             pos = i;
        // break; // use thsi for first occurance
        }
       
    }

    if(pos!=-1)
    {
        printf("It is found at %d", pos+1);
    }
    else{
        printf("Not found");
    }

    return 0;
}