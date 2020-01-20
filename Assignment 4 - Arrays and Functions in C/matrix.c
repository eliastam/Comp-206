#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define ROWS 5
#define COLS 5
//Elias Tamraz
//260871813

void fillMatrix(int matrix[ROWS][COLS])
{
	  
    srand(time(0) + (int)clock()); //RandomGenerator usees the current time plus the number of the clock tick since the beginning of the program
	int i, j;
	for (i=0; i<ROWS; i++)
	{
		for (j=0; j<COLS; j++)
		{
			matrix[i][j] = rand(); 
		}
	}
}

void printMatrix(int matrix[ROWS][COLS]) //switch columns and rows
{	
	printf("matrix = {\n");
	int i, j;
	for (i=0; i<ROWS; i++)
	{
		printf("\t{");
		for (j=0; j<COLS; j++)
		{
			printf("%d", matrix[i][j]);
			if (j < COLS - 1)
			{
				printf(", ");
			}
		}
		printf("}\n");
	}
	printf("}\n");
}

void transposeMatrix(int matrix[ROWS][COLS]) //transpose a square matrix
{
	int i, j;
	for (i=0; i<ROWS - 1; i++)
	{
		for (j=i + 1; j<COLS; j++)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
}

void multiplyMatrix(int m1[2][COLS],
					int m2[ROWS][COLS],
					int resultMatrix[ROWS][COLS])
{
	int i, j, k, sum;
	for (i=0; i<ROWS; i++)
	{
		for (j=0; j<COLS; j++)
		{
			sum=0;
			for (k=0; k<ROWS; k++)
			{
				sum += m1[i][k] * m2[k][j];
			}
			resultMatrix[i][j] = sum;
		}
		if (i > 1)
		{
			resultMatrix[i][j] = 0;
		}
	}
}

int main()
{
    int matrix[ROWS][COLS];
    
	fillMatrix(matrix);
    printMatrix(matrix); //Prints a Random Matrix
    
	transposeMatrix(matrix);
    printMatrix(matrix); //prints transpose Matrix
	
	int matrix2[2][COLS]={0,1,2,3,4,5,6,7,8,9};
	int matrixResult[ROWS][COLS];
    
	multiplyMatrix(matrix2, matrix, matrixResult);
    printMatrix(matrixResult); //Prints a Multiply Matrix 
	
	return 0;
}

