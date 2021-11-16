#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,choice;

    printf("Enter any two numbers:\n");
    scanf("%d%d",&a,&b);

    //Menu
    printf("Menu:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Divission\n5.Exit\n");

    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("Sum=%d",a+b);
        break;

        case 2:
        printf("Difference:%d",a-b);
        break;

        case 3:
        printf("Product:%d",a*b);
        break;

        case 4:
        printf("Quotent:%.2f",a/b);
        break;

        case 5:
        exit(0);

        default:
        printf("Enter a valid choice!");
    }
    
}