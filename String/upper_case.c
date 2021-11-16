//convert all characters to uppercase
#include <stdio.h>

int main()
{
    int i;
    char str[25];

    printf("Enter the string:");
    gets(str);

    for (i=0;str[i]!=0;i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }

    printf("The string is : %s",str);

}