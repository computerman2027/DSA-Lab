#include <stdio.h>
int r1, c1;
void main()
{
	int m[100][100];
	int j, i, flag = 0, count = 0;
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
			if(m[i][j]==0){
				count++;
			}
		}
			
    }
    if(count> ((r1*c1)/2)){
    	printf("The matrix is sparsh!\n");
	}
	else{
		printf("The matrix is not sparsh!\n");
	}
}
