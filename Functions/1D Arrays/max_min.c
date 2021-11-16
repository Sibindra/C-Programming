#include <stdio.h>
int i;

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

void calculate(int c[],int n)
{
    int max=c[0],min=c[0];

    for (i=0;i<n;i++)
    {
        if (max<c[i])
        {
            max=c[i];
        }

        if (min>c[i])
        {
            min=c[i];
        }
    }

    printf("\nMaximum=%d\nMinimum=%d",max,min);
}

void main()
{
    int a[10],max,min,n;

    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter an array:\n");
    input(a,n);

    printf("The function you entered is:\n");
    display(a,n);

    calculate(a,n);

}