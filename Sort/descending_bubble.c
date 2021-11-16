//Sort in descending order by bubble sort
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,a[10],temp;

    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    system("cls");

    printf("The elements of the array are:\n");
    for (i=0;i<n;i++)
    {
        printf("{%d}\t",a[i]);
    }

    //bubble sort
    for (i=0;i<(n-1);i++)
    {
        for (j=0;j<(n-1-i);j++)
        {
            if (a[j+1] > a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

   printf("\nThe sorted elements in descending order are:\n");
    for (i=0;i<n;i++)
    {
        printf("{%d}\t",a[i]);
    }

}