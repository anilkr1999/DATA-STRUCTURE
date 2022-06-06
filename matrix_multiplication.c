#include<stdio.h>
#include<conio.h>
int main()
{
    int sum,mat1[3][3],mat2[3][3],mult[3][3];
    printf("\n enter 9 value for mat1: ");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("\n enter 9 value for mat2: ");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            sum=0;
            for(int k=0;k<=2;k++)
            {
                sum=sum+mat1[i][k]*mat2[k][j];
            }
            mult[i][j]=sum;
        }
    }

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d  ",mult[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
