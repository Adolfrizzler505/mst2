#include <stdio.h>

int main(){
    
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    if(n < 2)
    {
        printf("Enter atlest two elements.");
        return 1;
    }

    int arr[n];


    printf("Enter elements of array: ");
    {
        for( int i = 0; i< n; i++)
        {
            scanf("%d", &arr[i]);
        }
    }

    int largest = arr[0];
    int secondLargest = -1;

    //finding 2nd largest element

    for(int i = 0; i < n; i++)
    {
        if(arr[i]> largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }

        else if(arr[i]>secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if(secondLargest==-1)
    {
        printf("No second largets element was found\n");
    }
    else{
        printf("Second largest elements is: %d", secondLargest);
    }

    return 0;
}