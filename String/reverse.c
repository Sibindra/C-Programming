#include <stdio.h>
#include <string.h>

int main()
{
    char str[25];
    int i,l;

    printf("Enter the string:");
    gets(str);

    l=strlen(str);

    printf("The reverse of the strng is %s",strrev(str));

    
}