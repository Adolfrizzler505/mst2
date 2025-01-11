#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
     int n,original,digit,  sum = 0;
    
    scanf("%d", &n);
    
    original = n;
    
    while(n!=0)
    {
        digit= n%10;
        
        int fact = 1;

        for(int i = 1; i<= digit; i++)
        {
            fact *= i;
        }
        
        sum += fact;
        n/=10;
    }
    
    if(sum==original)
    {
        printf("1\n");
    }
    
    else{
        printf("0\n");
    }
    
    return 0;
}
