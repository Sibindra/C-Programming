#include <stdio.h>

void main()
{
    int n,a[20],i,*p,min,max;

    printf("Enter the size of the array:");
    scanf("%d",&n);

   p=a;

    printf("Enter the array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }

    printf("The array you entered is:\n");
    for (i=0;i<n;i++)
    {
        printf("%d",(*p+i));
    }

    max=*p;
    min=*p;

   for (i=0;i<n;i++)
    {
        if (max<(*(p+i)))
        {
            max=(*(p+i));
        }

        if (min>(*(p+i)))
        {
            min=(*(p+i));
        }
   }

    printf("\nMaximum value=%d\nMinumum=%d",max,min);


}