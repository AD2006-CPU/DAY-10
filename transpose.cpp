#include<stdio.h>
#define SIZE 2
void inputMatrix(int matrix[SIZE][SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
    for(int j=0;j<SIZE;j++)
    {
    scanf("%d", &matrix[i][j]);
    }
    
    }
}
void displayMatrix(int matrix[SIZE][SIZE])
{
    for(int i = 0;i <SIZE ;i++)
    {
    for(int j=0; j<SIZE ;j++)
    {
    printf("%d ", matrix[i][j]);
    }
    printf("\n");
    }
}
void transposeMatrix(int matrix[SIZE][SIZE], int result[SIZE][SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
    for(int j=0;j<SIZE;j++)
    {
    result[j][i]=matrix[i][j];
    }
    }
}
int main()
{
int matrix[SIZE][SIZE], result[SIZE][SIZE];
printf("Enter the elements of the matrix :\n");
inputMatrix(matrix);
transposeMatrix(matrix, result);
printf("Result of matrix :\n");
displayMatrix(result);
return 0;
}
