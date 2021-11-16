#include <stdio.h>
#include <conio.h>

float simple_intrest(float principle,float time,float rate)
{
    printf("The simple intrest is:");
    printf("%.2f",((principle*time*rate)/100));
}
int main()
{
    float p,t,r;

    printf("Enter the principle,time and rate:\n");
    scanf("%f%f%f",&p,&t,&r);

    simple_intrest(p,t,r);

    return 0;
}