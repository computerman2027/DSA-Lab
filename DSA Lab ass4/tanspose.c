#include <stdio.h>
void main()
{
	int r;
	int c;
	int a[10][10], b[10][10];
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	printf("Enter the number of columns: ");
	scanf("%d", &c);
	
	printf("Enter the elements in the first matrix.\n");
	
	for(int i = 0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("ARRAY[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	for(int i = 0;i<r;i++)
	{
		for(int j =0;j<c;j++)
		{
			a[i][j] = a[j][i];
		}
	}
	
		printf("The Transpose Matrix is:\n");
	
	for(int i = 0;i<r;i++)
	{
		printf("| ");
		for(int j=0; j<c; j++)
		{
			printf("%d ", a[i][j] );
		}
		printf("|\n");
	}
	
}
