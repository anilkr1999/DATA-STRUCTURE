//matrix transpose without using any auxiliary matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int r,c,i,j,k;
    printf("\n enter two value first for row and second for column");
    printf("\n row column are same:");
    scanf("%d%d",&r,&c);
    int mat[r][c];
    printf("\n enter %d value:",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<r-1;i++)
    {
        for(j=i+1;j<c;j++)
        {
            k=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=k;

        }
    }

    printf("\n TRANSPOSE MATRIX ARE:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}

