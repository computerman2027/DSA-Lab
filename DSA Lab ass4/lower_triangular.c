#include <stdio.h>
int r1, c1;
void main()
{
	int m[100][100];
	int j, i;
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
    
    for(i=0; i<r1;i++)
	{
		for( j=0; j<c1;j++)
		{
			if(j<i){
			printf("%d ", m[i][j]);
		    }
			else
			{
				printf("0 ");
			 } 
		}
		printf("\n");
			
    }
}
