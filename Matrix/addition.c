#include <stdio.h>

void main()
{
    int a[20][20],b[20][20],m,n,i,j;

    printf("Enter the row and column size:\n");
    scanf("%d%d",&m,&n);

    printf("Enter the elements of first matrix:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d\t",&a[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d\t",&b[i][j]);
        }
    }

    printf("The sum of the marix is:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}