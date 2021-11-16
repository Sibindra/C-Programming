#include <stdio.h>
int i,j,k;

void input(int a[20][20],int r,int c)
{
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int a[20][20],int r,int c)
{
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

void multiplication(int a[20][20],int b[20][20],int c[020][20],int r1,int c1,int r2,int c2)
{
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            c[i][j]=0;

            for (k=0;k<c1;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

void main()
{
    int a[20][20],b[20][20],c[20][20],r1,c1,r2,c2;

    printf("Enter the row and column size of first matrix:\n");
    scanf("%d%d",&r1,&c1);

    printf("Enter the row and column size of second:\n");
    scanf("%d%d",&r2,&c2);

    if (c1!=r2)
    {
        printf("The multiplication is not possible!");
    }

    else 
    {
        printf("Enter the elements of first matrix:\n");
        input(a,r1,c1);

        printf("Enter the elements of second matrix:\n");
        input(b,r2,c2);

        printf("The the elements is:\n");
        display(a,r1,c1);

        printf("The elements of second matrix are:\n");
        display(b,r2,c2);

        printf("The product of these matrix are:\n");
        multiplication(a,b,c,r1,c1,r2,c2);

        display(c,r1,c2);

    }

}