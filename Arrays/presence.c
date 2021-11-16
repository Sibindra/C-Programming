//Program to check if given no is present in array or not
#include <stdio.h>

int main()
{
    int i,n,a[25],num,flag =0;

    printf("Enter a the number of integers to check:");
    scanf("%d",&n);

    printf("Enter the integers:\n");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The integers you entered are:\n");
    for (i=1;i<=n;i++)
    {
        printf("{%d}\t",a[i]);
    }

    printf("\nEnter the integer you want to check:");
    scanf("%d",&num);

    for (i=1;i<=n;i++)
    {
        if (a[i]==num)
        {
            flag =1;
        }
    }

    if (flag==1)
    {
        printf("The number %d is present in provided array.",num);
    }

    else 
    {
        printf("The number %d is absent in provided array.",num);
    }


}