#include <stdio.h>

int cube(int n)
{
    return n * n * n;
}

int main(){
    
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The cube of %d is %d", n, cube(n));

    return 0;
}