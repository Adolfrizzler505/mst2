#include <stdio.h>

int main(){
    
    int rows, columns,i,j;

    printf("Enter rows and columns of  matrix : ");
    scanf("%d %d", &rows, &columns);

   

    int mat1[rows][columns];
    int mat2[rows][columns];
    int result[rows][columns];
    printf("Enter elements of matrix1:\n");
    for( i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of matrix2:\n");
    for( i = 0; i < rows; i++)
    {
        for( j = 0; j < columns; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    //sum starts

    
    for( i = 0; i < rows; i++)
    {
        for( j = 0; j < columns; j++)
        {
             result[i][j]=0;
        }
    }

    for( i = 0; i < rows; i++)
    {
        for( j = 0; j < columns; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Sum of two matrices:\n");
    for( i = 0; i < rows; i++)
    {
        for( j = 0; j < columns; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}