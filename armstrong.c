#include <stdio.h>
#include<math.h>


int main(){

    int num, orgNum, remainder = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    orgNum = num;

    while (orgNum != 0)
    {
        orgNum /= 10;
        n++;
    }

    orgNum = num;

    int result;

    while(orgNum != 0)
    {
        remainder = orgNum % 10;
        result += pow(remainder, n);
        orgNum/=10;
    }
    

    if(num == result)
    {
        printf("It is an armstrong number");
    }

    else{
        printf("It is not.");
    }


    return 0;
}