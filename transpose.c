#include <stdio.h>

int main(){
    
    int rows, columns;

    printf("Enter rows and columns of the matrix:");
    scanf("%d %d", &rows, &columns);

    int mat[rows][columns];

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nTranspose of the matrix:\n");
    for(int j = 0; j < columns; j++)
    {
        for(int i = 0; i < rows; i++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}