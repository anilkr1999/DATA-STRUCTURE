#include<stdio.h>
#include<conio.h>
int top=-1,size,*stack,choice;

void push()
{
    int data;
    if(top==size)
        printf("\n stack is full");
        else
        {
            printf("\n enter a value for push");
            scanf("%d",&data);
            top++;
            stack[top]=data;
        }
}

void pop()
{
    if(top==-1)
        printf("\n stack is empty");
    else
    {
        printf("\n your POPED data is %d",stack[top]);
        top--;
    }
}

void peek()
{
   if(top==-1)
        printf("\n stack is empty");
        else
        {
            printf("\n your top data=%d",stack[top]);
        }
}

int main()
{
    printf("\n enter the size of stack: ");
    scanf("%d",&size);
    stack=(int*)malloc(sizeof(size));
    L:
    printf("\n enter 1 for push: ");
    printf("\n enter 2 for pop: ");
    printf("\n enter 3 for peek: ");
    printf("\n enter more than 3 for exit: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        push();
        goto L;
        break;
    case 2:
        pop();
        goto L;
        break;
    case 3:
        peek();
        goto L;
        break;
    default:
        exit(0);
    }
    getch();
    return 0;
}
