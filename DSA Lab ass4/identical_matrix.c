#include <stdio.h>
#include <stdlib.h>
void Multiply(int m1[100][100] ,int m2[100][100]);
int r1, r2, c1, c2;

void main()
{
	int m1[100][100], m2[100][100];
	int j, i, flag = 0;
	printf("Enter the row of the first matrix: ");
	scanf("%d", &r1);
    printf("Enter the column of the first matrix: ");
	scanf("%d", &c1);
	printf("Enter the row of the second matrix: ");
	scanf("%d", &r2);
	printf("Enter the column of the first matrix: ");
	scanf("%d", &c2);
	
	if(r1 != r2 || c1 != c2 ){
		printf("Not possible to compare the two matrices!!\n");
		exit(0);
	}
	
	printf("Enter the elements of the first matrix:\n");
	
	for(i=0; i<r1;i++)
	{
		for( j=0; j<c1;j++)
		{
			printf("Array[%d][%d]: ", i, j);
			scanf("%d", &m1[i][j]);
		}
			
    }
    

    printf("Enter the elements of the Second matrix:\n");
	for(i=0;i<r2;i++)
	{
		for( j = 0; j<c2 ; j++ )
		{
			printf("Array[%d][%d]: ", i, j);
			scanf("%d", &m2[i][j]);
		}
			
    }

	for(i=0;i<r2;i++)
	{
		for( j = 0; j<c2 ; j++ )
		{
			if(m1[i][j]!=m2[i][j]){
				flag = 1;
			}
		}
			
    }
    if(flag == 0){
    	printf("The matrices are identical!\n");
	}
	else{
		printf("The matrices are not identical!\n");
	}
    
}
    
    
