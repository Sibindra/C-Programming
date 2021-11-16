//sort in ascending order by selection sort 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,temp,a[10];

    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    printf("Enter the elements in the array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    system("cls");

    printf("The array's elements are as follows:\n ");
    for (i=0;i<n;i++)
    {
        printf("{%d}\t",a[i]);
    }

    //selection sort
    for (i=0;i<(n-1);i++)
    {
        for (j=(i+1);j<n;j++)
        {
            if (a[i] > a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }


    printf("\nThe elements is ascending order are:\n");
    for (i=0;i<n;i++)
    {
        printf("{%d}\t",a[i]);
    }

}