#include <stdio.h>
int i,j;

void input(int a[],int n)
{
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void display(int b[],int n)
{
    for (i=0;i<n;i++)
    {
        printf("{%d}\t",b[i]);
    }
}

void sort(int c[],int n)
{
    int temp;

    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (c[j+1]<c[j])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
}

void main()
{
    int a[20],n;

    printf("Enter the size of the array:\n");
    scanf("%d",&n);

    printf("Enter the array:\n");
    input(a,n);

    printf("The array you entered is:\n");
    display(a,n);

    printf("\nThe sorted elements are:\n");
    sort(a,n);
    display(a,n);

    
}