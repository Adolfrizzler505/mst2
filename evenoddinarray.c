#include <stdio.h>

int main(){
    
    int n;
     int even = 0, odd = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array: ");

    for(int i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d", odd);

    return 0;
}