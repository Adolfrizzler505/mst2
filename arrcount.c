#include <stdio.h>

int main(){

    int n, count = 0, target;

    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of aray: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the targeted element: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        count++;
    }

    printf("%d", count);



    return 0;
}