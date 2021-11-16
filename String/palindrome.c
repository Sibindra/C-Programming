#include <stdio.h>
#include <string.h>

int main()
{
    char s1[25],s2[25];

    printf("Enter the string:");
    gets(s1);

   strcpy(s2,s1);
   strrev(s2);

    if (strcmp(s1,s2)==0)
    {
        printf("The string is palindrome.");
    }

    else 
    {
        printf("The string is not palindrome.");
    }


}
