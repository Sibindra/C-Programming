//Program to find out maximum and minimum age and average age 
#include <stdio.h>

void main()
{
    //variable declarations
    int a[100],i,n,num,min,max,sum=0;
    float avg;

    //size of array 
    printf("Enter the number of persons:");
    scanf("%d",&n);

    //array input 
    printf("Enter the age of %d persons:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //array display
    printf("The ages you entered are as follows:\n");
    for (i=0;i<n;i++)
    {
        printf("{%d}\t",a[i]);
    }

    //min and maximum 
    max=a[0];
    min=a[0];

    for (i=0;i<n;i++)
    {
        if (max < a[i])
        {
            max=a[i];
        }
        if (min > a[i])
        {
            min=a[i];
        }

        sum+= a[i];
    }

    avg=(float)sum/n;

    //output display
    printf("\nMaximum age: %d\n Minimum age: %d\n Average age: %.2f\n",max,min,avg);


}