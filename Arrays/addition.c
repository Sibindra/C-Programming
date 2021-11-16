//input two array and display their sum
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a[10],b[10],n,i;

    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    printf("Enter the elements of first array:\n");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the elements of second array:\n");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }

    system("cls");

    printf("The Elements of First array are:\n");
    for (i=1;i<=n;i++)
    {
        printf("{%d}\t",a[i]);
    }

    printf("\nThe Elements of Second array are:\n");
    for (i=1;i<=n;i++)
    {
        printf("{%d}\t",b[i]);
    }

    printf("\n\nSum of two arrays are as follows:\n");
    for (i=1;i<=n;i++)
    {
        printf("{%d}\t",(a[i]+b[i]));
    }


}