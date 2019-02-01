#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int selection,a,b,c;
clrscr();

printf("enter your choice");

delay(2000);
printf("\n1.sum");
printf("\n2.minus");
printf("\n3.multiply");
printf("\n4.divide");
scanf("%d",&selection);

switch(selection)
{
case 1:
printf("enter two no");
scanf("%d %d",&a,&b);
c=a+b;
printf("%d",c);

case 2:
printf("enter two no");
scanf("%d %d,&a,&b);
c=a-b;
printf("%d",c);

case 3:
printf("enter two no");
scanf("%d %d,&a,&b);
c=a*b;
printf("%d",c);

case 4:
printf("enter two no");
scanf("%d %d",&a,&b);
c=a/b;
printf("%d",c);
default:
printf("invalid input");

}
getch();
}

