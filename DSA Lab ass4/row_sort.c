#include <stdio.h>
int r1, c1;
void Insertion(int m[100][100], int n[100][100], int);
void main()
{
	int m[100][100];
	int n[100][100];
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
    
    printf("The matrix is: \n");
	for(int i = 0; i<r1;i++)
	{
		for(int j = 0; j<c1;j++)
		{
			printf("%d\t", m[i][j]);
			
		}
		printf("\n");
	}
    
    for(i = 0; i< r1; i++){
    	Insertion(m,n,i);
	}
	
	printf("The sorted matrix is: \n");
	for(int i = 0; i<r1;i++)
	{
		for(int j = 0; j<c1;j++)
		{
			printf("%d\t", n[i][j]);
			
		}
		printf("\n");
	}
	

}

void Insertion(int a[100][100], int b[100][100] ,int x)
{
	int i = 1, j;
	int temp;
	while(i<c1)
	{
		j = i-1;
		temp = a[x][i];
		while( j>=0 && a[x][j]>temp)
		{
			a[x][j+1] = a[x][j];
			j = j-1;
		}
		i = i + 1;
		a[x][j+1] = temp;
	}
	for(i=0;i<c1;i++){
		b[x][i] = a[x][i];
	}
	
	
	
}
