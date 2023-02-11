#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
    int x,choice=1;
    while(choice)
    {
        printf("Enter the data :\n");
        scanf("%d",&x);
        if(top==N-1)
        {
            printf("stack is full\n");
        }
        else{
            top++;
            stack[top]=x;
        }
        printf("Do u want to continue press 1 otherwise press 0\n");
        scanf("%d",&choice);
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else{
        item=stack[top];
        printf("\n Stack pop item is %d",item);
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty:\n");
    }
    else{
        printf("\n Stack peek item is %d",stack[top]);
    }
}
void display()
{
    printf("\n Stack is :\n");
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d \n",stack[i]);
    }
}
void main()
{
    push();
    display();
    pop();
    display();
    peek();
    display();
}