#include <stdio.h>
#include<string.h>

void toggleCase(char str[100])
{
    for(int i = 0; str[i] != '0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }
}

int main(){

    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);  // string name, size of string, stdin.

    toggleCase(str);

    printf("The toggled case string is: %s", str);
   

    return 0;
}