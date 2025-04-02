#include <stdio.h>
#define ROWS 2
#define COLS 2
void addMatrices(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS]) 
{
    for (int i = 0; i < ROWS; i++) 
	{
    for (int j = 0; j < COLS; j++) 
	{
    result[i][j] = A[i][j] + B[i][j];
    }
    }
}
void printMatrix(int matrix[ROWS][COLS]) 
{
    for (int i = 0; i < ROWS; i++) 
	{
    for (int j = 0; j < COLS; j++) 
	{
    printf("%d ", matrix[i][j]);
    }
    printf("\n");
    }
}
int main() 
{
    int A[ROWS][COLS] = {{1, 2}, {3, 4}};
    int B[ROWS][COLS] = {{5, 6}, {7, 8}};
    int result[ROWS][COLS];
    addMatrices(A, B, result);
    printf("Resultant Matrix:\n");
    printMatrix(result);
    return 0;
}

