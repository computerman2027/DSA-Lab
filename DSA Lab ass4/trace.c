#include <stdio.h>
int r1, c1;
void main()
{
	int m[100][100];
	int j, i, sum = 0;
	printf("Enter the row of the matrix: ");
	scanf("%d", &r1);
    printf("Enter the column of the matrix: ");
	scanf("%d", &c1);
	
	printf("Enter the elements in the matrix: \n");
	
	for(i=0; i<r1;i++)
	{
		for( j=0; j<c1;j++)
		{
			printf("Array[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
			
    }
    printf("The entered matrix is:\n");
    for(i=0; i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
    		printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r1;i++)
	{
		for( j = 0; j<c1 ; j++ )
		{
			if(i==j){
				sum = sum + m[i][j];
			}
		}
			
    }
    printf("The trace is: %d\n", sum);
}

