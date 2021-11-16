#include <stdio.h>

void main()
{
    int unit;
    float rate;

    printf("Enter the unit:");
    scanf("%d",&unit);

    if (unit<=20)
    {
        rate=80;
    }
    
    else if(unit >20 && unit <=100)
    {
        rate=80+(unit-20)*7.5;
    }

    else if (unit >100 && unit <=200)
    {
        rate=80+(100-20)*7.5+(unit-100)*7.5;
    }

    else 
    {
        rate=80+(100-20)*7.5+(200-100)*8.5+(unit-200)*9.5;
    }

    rate+=50;

    printf("The total charge :%.2f",rate);

}