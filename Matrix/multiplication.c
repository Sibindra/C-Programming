#include <stdio.h>

int main()
{
    int a[20][20],b[20][20],r1,c1,r2,c2,i,j,c[20][20],k;

    printf("Enter the row and column size of first matrix:\n");
    scanf("%d%d",&r1,&c1);

    printf("Enter the row and column size of second:\n");
    scanf("%d%d",&c2,&r2);

    if (c1!=r2)
    {
        printf("The multiplication is not possible!");
    }

    else 
    {

        printf("Enter the elements of first matrix:\n");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter the elements of second matrix:\n");
        for (i=0;i<r2;i++)
        {
            for (j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        printf("The product of the entered matrix are:");
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

        printf("The resultant matrix after multiplications is:\n");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
}
