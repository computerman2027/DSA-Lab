#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int top;

void push(int *arr, int item)
{
	if( top != MAX){
		top++;
		arr[top] = item;
	}
	else
	{
		printf("STACK OVERFLOW!!\n");
	}
	
}

void pop(int *arr)
{
	if(top != -1)
	{
		top--;
	}
	else
	{
		printf("STACK UNDERFLOW!!\n");
	}
	
}

void peep(int *arr)
{
	if(top != -1)
	{
		printf("TOP Element is: %d\n", arr[top]);
	}
	else
	{
		printf("STACK is Empty!\n");
	}
}

void display(int *arr)
{
	int t = top;
	printf("The current stack is:-\n");
	while(t>0)
	{
		printf("%d\n", arr[t]);
		t--;
	}
}



void main()
{
	int *arr = (int*)malloc(100*sizeof(int));
	int ch, top = -1, item;
	while(ch != -1)
	
	{

		printf("Enter 1 to push an element into the stack\n");
		printf("Enter 2 to pop an element into the stack\n");
		printf("Enter 3 to peep an element\n");
		printf("Enter 4 to display the stack\n");
		printf("Enter '-1' to Exit\n");
		
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1:
				printf("Enter the element to be inserted\n");
				scanf("%d", &item);
				push(arr, item);
				break;
			case 2:
				peep(arr);
				pop(arr);
				break;
			case 3:
				peep(arr);
				break;
			case 4:
				display(arr);
				break;
			default:
				if(ch != -1){
					printf("INVALID INPUT! TRY AGAIN!\n");
				}
				else
				{
					display(arr);
				}
				break;
		}
		
	}
	
	
}
