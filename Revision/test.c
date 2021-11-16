#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int reverse()
{
	char str[1000], rev[1000];
  	int i, j, count = 0;

  	printf("Enter the string: ");
  	scanf("%s", str);

  //finding the length of the string
  while (str[count] != '\0')
  {
    count++;
  }

  j = count - 1;

  //reversing the string by swapping
  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }

  printf("\nString After Reverse: %s", rev);
}

int calculator()
{
	float a,b;

	printf("Enter any two integers:\n");
	scanf("%f%f",&a,&b);

	printf("Addition= %.2f \n",(a+b));
	printf("Difference= %.2f \n",(a-b));
	printf("Multiplication= %.2f \n",(a*b));
	printf("Division= %.2f \n",(a/b));

	return 0;
}

int matrix()
{
	int a[10][10],i,j,max;

	printf("Enter the elements of 4*4 matrix:\n");

	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	max=a[0][0];

	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(max < a[i][j])
			{
				max= a[i][j];
			}
		}
	}

	printf("Maximum element= %d",max);

	return 0;
}

int main()
{
	int choice;

	printf("Menu:\n1.Read a string and print and reverse it\n2.Input two function and perform as four function (+,-,*,/) calculator\n3.Read the matrix of 4*4 and find the largest element\n4.exit\n");

	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			reverse();
			break;

		case 2:
			calculator();
			break;

		case 3:
			matrix();
			break;

		case 4:
			exit(0);

		default:
			printf("Enter a valid choice!");

	}

}