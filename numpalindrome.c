#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num, reversedNum, originalNum,  remainder;
      
    scanf("%d", &num);
    
    originalNum = num;
    
    while( num != 0 )
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num/=10;
    }
    
    if(originalNum == reversedNum)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
    
    return 0;
}
