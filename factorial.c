#include<stdio.h>
#include<conio.h>
int fact_recurssion(int n)
{
    if(n==0)
        return 1;
    return (n*fact_recurssion(n-1));
}

int fact_iteration(int n)
{
    for(int i=n-1;i>=1;i--)
        n=n*i;
    return n;
}

int main()
{
    int n;
    printf("\n enter a value:");
    scanf("%d",&n);
    printf("\n factorial of %d using RECURSSION is %d",n,fact_recurssion(n));
    printf("\n factorial of %d using ITERATION is %d",n,fact_iteration(n));
    getch();
    return 0;
}
