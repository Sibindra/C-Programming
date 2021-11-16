#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *ptr,n,i,min,max;

    printf("Enter the size of array:");
    scanf("%d",&n);

    ptr=(int *)malloc(n*sizeof(int));

    printf("Enter the elements of the array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

    printf("The array you entered is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",*(ptr+i));
    }

    min=*ptr;
    max=*ptr;

    for (i=0;i<n;i++)
    {
        if (max<*(ptr+i))
        {
            max=*(ptr+i);
        }

        if (min>*(ptr+i))
        {
            min=*(ptr+i);
        }
    }

    printf("\nMaximum=%d\nMinimum=%d",max,min);

    free(ptr);
}