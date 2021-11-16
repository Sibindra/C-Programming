#include <stdio.h>
int i,j;

void input(int a[20][20],int m,int n)
{
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d\t",&a[i][j]);
        }
    }
}

void display(int b[20][20],int m,int n)
{
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d\t",&b[i][j]);
        }
        printf("\n");
    }
}

void addition(int a[20][20],int b[20][20],int m,int n)
{
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}


void main()
{
    int i,j,m,n,a[20][20],b[20][20];

    printf("Enter the row and column size:\n");
    scanf("%d%d",&m,&n);

    printf("Enter the elements of first matrix:\n");
    input(a,m,n);

    printf("Enter the elements of second matrix:\n");
    input(b,m,n);

    printf("The sum of the matrix is:\n");
    addition(a,b,m,n);

}