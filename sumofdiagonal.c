#include <stdio.h>

int main(){


    int size;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &size, &size);

    int arr[size][size];

    printf("Enter elements of matrix:\n");
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;

    for(int i = 0; i < size; i++)
    {
        primaryDiagonal += arr[i][i];
        secondaryDiagonal += arr[i][size - 1 - i];
    }

    printf("The sum of primary diagonal: %d\n", primaryDiagonal);
    printf("The sum of secondary diagonal is %d", secondaryDiagonal);

    return 0;
}