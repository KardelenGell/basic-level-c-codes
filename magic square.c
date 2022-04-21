// Kardelen Gel - 181805057 

#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int A[100][100];
	int i, j, M, N;
	int rowsum, columnsum, diagonalsum;
	
	printf("Enter the order of the matrix:\n");
	scanf("%d %d", &M, &N);
	if (M == N) 
	{
		printf("\nEnter the elements of matrix: \n");
		for (i = 0; i < M; i++) 
		{
			for (j = 0; j < N; j++) 
			{
				scanf("%d", &A[i][j]);
			}
		}

		printf("\nMATRIX is\n");
		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++)
			{
				printf("%3d", A[i][j]);
			}
			printf("\n");
		}

		// calculate diagonal sum 
		diagonalsum = 0;
		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++)
			{
				if (i == j) 
				{
					diagonalsum = diagonalsum + A[i][j];
				}
			}
		}

		// calculate row sum
		rowsum = 0;
		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++) 
			{
				rowsum = rowsum + A[i][j];
			}
			if (rowsum != diagonalsum)
			{
				printf("\nGiven matrix is not a magic square.");
				return;
			}
		}

		// calculate column sum
		columnsum = 0;
		for (i = 0; i < M; i++) 
		{
			for (j = 0; j < N; j++)
			{
				columnsum = columnsum + A[j][i];
			}
			if (columnsum != diagonalsum) 
			{
				printf("\nGiven matrix is not a magic square.");
				return;
			}
		}

		printf("\nGiven matrix is a magic square matrix.");
	}
	else {
		printf("\n\nPlease enter the square matrix order(m=n) \n\n");
	}
	system("pause");
	return 0;
}