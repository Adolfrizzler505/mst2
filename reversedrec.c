#include <stdio.h>

int reversedNumber(int n, int reversed)
{
    if(n == 0)
    {
        return reversed;
    }
    else
    {
        return reversedNumber(n/10, reversed * 10 + n %10);
    }
}

int main(){
    
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reversedNumber(num, 0);
    printf("Reversed number: %d", reversed);


    return 0;
}