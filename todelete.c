#include <stdio.h>

int main(){
    

    int size, toDelete, position;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // printf("Elements of the arrays: ");
    // for(int i = 0; i < size; i++)
    // {
    //     printf("%d", arr[i]);
    // }

    printf("Enter the position of the element to delete(1 to %d): ", size);
    scanf("%d", &position);

    toDelete = position - 1;



    for(int i = toDelete; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("Array after deletion: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}