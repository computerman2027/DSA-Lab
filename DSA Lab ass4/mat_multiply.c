#include <stdio.h>
#include <stdlib.h>
void Multiply(int m1[100][100] ,int m2[100][100]);
int r1, r2, c1, c2;

void main()
{
	int m1[100][100], m2[100][100];
	int j, i;
	printf("Enter the row of the first matrix: ");
	scanf("%d", &r1);
        printf("Enter the column of the first matrix: ");
	scanf("%d", &c1);
	printf("Enter the row of the second matrix: ");
	scanf("%d", &r2);
	printf("Enter the column of the first matrix: ");
	scanf("%d", &c2);
	
	if(c1 != r2){
		printf("Multiplication of these matrices not Possible!\n");
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
    
    printf("The first matrix is: \n");
	for(int i = 0; i<r1;i++)
	{
		for(int j = 0; j<c1;j++)
		{
			printf("%d\t", m1[i][j]);
			
		}
		printf("\n");
	}
	
	printf("The second matrix is: \n");
	for(int i = 0; i<r2;i++)
	{
		for(int j = 0; j<c2;j++)
		{
			printf("%d\t", m2[i][j]);
			
		}
		printf("\n");
	}
    
    
    
    Multiply(m1, m2);
    
   
}

void Multiply(int m1[100][100], int m2[100][100])
{
	int m3[100][100];
	int i =0, j;
    while (i<r1)
    {
    	j = 0;
    	while (j<c2)
    	{
    		m3[i][j] = 0;
    		int k = 0;
    		while(k<c1){
    			m3[i][j] = m3[i][j] + (m1[i][k]*m2[k][j]);
    			k++;
    		}
    		j++;
    	}
    	i++;		
	}
	
	printf("The multiplied matrix is: \n");
	for(int i = 0; i<r1;i++)
	{
		for(int j = 0; j<c2;j++)
		{
			printf("%d\t", m3[i][j]);
			
		}
		printf("\n");
	}
}
    

