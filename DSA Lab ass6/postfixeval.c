//one digit
//multi-digits
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

char str[MAX];
float stack[MAX];
int top = -1;
int len;




void pop()
{
    if(top == -1)
    {
        printf("STACK UNDERFLOW!!\n");
        return;
    }
    else{

        top--;

    }
}
void push(float n)
{
    if(top == MAX)
    {
        printf("STACK OVERFLOW!!\n");
        return;
    }
    else{
        top++;
        stack[top] = n;
    }

}
float evaluate()
{
    int i=0;
    float a, b;
    while(i<=MAX)
    {
        printf("str[i] = %c\n",str[i]);
        if(str[i]==')')
        {
            return stack[top];
        }
        else if(isdigit(str[i]))
        {
            printf("pushed %d\n",((int)str[i])-48);
            push((float)((int)str[i])-65);
        }
        else
        {
            a = stack[top];
            pop();
            b = stack[top];
            pop();
            printf("a = %f b = %f",a,b);
            if(str[i]== '+')
            {
                push(a+b);
            }
            if(str[i]== '-')
            {
                push(a-b);
            }
            if(str[i]=='*')
            {
                push(a*b);
            }
            if(str[i]=='/')
            {
                push(a/b);
            }
            if(str[i]=='^')
            {
                push(pow(a,b));
            }
        }
        i++;
    }

}
void main()
{
    int i=0;
    float ans;

    // taking the expression as a input
    printf("Enter the postfix expression:");
    while(1)
    {
        str[i] = getchar();
        if(str[i]=='\n')
        {
            str[i]=')';
            str[i+1]='\0';
            break;
        }
        i++;
    }

    len = strlen(str);

    // str[len] = ')';

    ans = evaluate();

    printf("The answer of the evaluated expression is: %f\n",ans );
}
