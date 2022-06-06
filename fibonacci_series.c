#include<stdio.h>
#include<conio.h>
int fibo_recurssion(int n)
{
    if(n<=1)
      return n;
    return fibo_recurssion(n-1)+fibo_recurssion(n-2);
}

int fibo_iteration(int n)
{
    int n1=1,n2=1,n3;
    printf("%d %d ",n1,n2);
    for(int i=3;i<=n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;

        printf("%d ",n3);
    }
}

int main()
{
    int n;
    printf("\n enter a no:");
    scanf("%d",&n);
    printf("%dth term of fibonacci is %d",n,fibo_recurssion(n));
    printf("\n fibonacci series using iteration:\n");
    fibo_iteration(n);
    getch();
    return 0;
}
