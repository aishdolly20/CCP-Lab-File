/*Program to swap two values using a third variable*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c = 0;
	
	printf("Enter any number in first variable \n");
	scanf("%d",&a);
	printf("Enter any number in second variable \n");
	scanf("%d",&b);
	
	printf("Value in first variable %d \n",a);
	printf("Value in second variable %d \n",b);
	
	c = a;
	a = b;
	b = c;
	
	printf("Value in first variable %d \n",a);
	
	printf("Value in second variable %d \n",b);
	
	getch();
}
