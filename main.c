#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int selection,a,b,c;

	// change this to system("clear") if running on linux machine
	system("cls");

	printf("enter your choice");

	printf("\n1.sum");
	printf("\n2.minus");
	printf("\n3.multiply");
	printf("\n4.divide");
	scanf("%d",&selection);

	do
	{
		switch(selection)
		{
			case 1:
			printf("enter two numbers");
			scanf("%d %d",&a,&b);
			c=a+b;
			printf("%d",c);

			case 2:
			printf("enter two numbers");
			scanf("%d %d",&a,&b);
			c=a-b;
			printf("%d",c);

			case 3:
			printf("enter two numbers");
			scanf("%d %d",&a,&b);
			c=a*b;
			printf("%d",c);

			case 4:
			printf("enter two numbers");
			scanf("%d %d",&a,&b);
			c=a/b;
			printf("%d",c);

			default:
			printf("invalid input. Enter a valid option\n");
		}
	} while (selection != 5);

	return 0;
}

