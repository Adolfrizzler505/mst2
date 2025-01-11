#include <stdio.h>

int count(int n)
{
    if(n == 0)
     return 0;
     else
        return 1 +  count(n/10);
}


int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = count(num);

    printf("Total count = %d", result);


    return 0;
}