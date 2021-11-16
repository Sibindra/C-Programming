#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,i,n;

    printf("Enter the size of array:");
    scanf("%d",&n);

    ptr=(int *)malloc(n*sizeof(int));

    printf("Enter the elements of the array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

    printf("The elements you entered is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",*(ptr+i));
    }

    free(ptr);
}