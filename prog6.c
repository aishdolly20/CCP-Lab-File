/*Program to check whether two values are equal or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	
	printf("Enter first number of your choice \n");
	scanf("%d",&a);
	printf("Enter second number of your choice \n");
	scanf("%d",&b);
	
	if(a == b)
	{
		printf("Both the numbers are equal \n");
	}
	else
	{
		printf("The numbers are not equal \n");
	}
}
