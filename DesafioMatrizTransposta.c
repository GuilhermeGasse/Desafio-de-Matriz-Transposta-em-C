/*

Write a function that outputs the transpose of a matrix - a new matrix where the columns and rows of the original are swapped.

For example, the transpose of:

| 1 2 3 |
| 4 5 6 |
is

| 1 4 |
| 2 5 |
| 3 6 |
The input to your function will be an array of matrix rows. You can assume that each row has the same length, and that the height and width of the matrix are both positive.

*/

#include <stdio.h>

int main()
{
	printf("Digite uma matriz inicial para obter sua transposta. \n\n");
	
	int m[3][3], i, j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\nA matriz informada é:\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d", m[i][j]);
		}
		printf("\n");
	}	
	
	printf("\nA matriz transposta é:\n");
	
	for(j=0; j<3; j++)
	{
		for(i=0; i<3; i++)
		{
			printf("%d", m[i][j]);
		}
		printf("\n");
	}	
	
}

