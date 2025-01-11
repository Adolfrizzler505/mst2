#include <stdio.h>

long long int factotial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else{
        return n * factotial(n - 1);
    }


}

int main(){

    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Not possible");
    }
    else{
        printf("Factorial of %d is %lld", n, factotial(n));
    }


    return 0;
}