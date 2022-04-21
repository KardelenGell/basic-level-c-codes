#pragma warning (disable:4996)
#include <stdio.h> 
int main()
{
	int a, b, c;
	printf("Please enter the number of lines :");
	scanf("%d", &c);
	for (b = 1; b <= c; b++)
	{
		for (a = 1; a <= b; a++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (a = c; a >= 1; --a)
	{
		for (b = 1; b <= a; ++b)
		{
			printf("*");
		}
		printf("\n");
	}

	for (a = c; a >= 1; a--)
	{
		for (b = 1; b <= c - a; b++)
			printf(" ");
		for (b = 1; b <= a; b++)
			printf("*");

		printf("\n");
	}

	for (a = 1; a <= c; a++)
	{
		for (b = 1; b <= c - a; b++)
			printf(" ");
		for (b = 1; b <= a; b++)
			printf("*");

		printf("\n");

	}
	return 0;
}