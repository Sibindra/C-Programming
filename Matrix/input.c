#include <stdio.h>

int main()
{
    int a[20][20],i,j,m,n;

    printf("Enter the row and column size:\n");
    scanf("%d%d",&m,&n);

    printf("Enter the elements of %d*%d matrix:\n",m,n);
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d\t",&a[i][j]);
        }
    }

    printf("The matrix you entered is:\n");
     for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}