/*Program to accept temperature in celsius and convert it into fahrenheit*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	
	printf("Enter the temperature in celsius \n");
	scanf("%f",&c);
	
	f = (c * 9/5) + 32;
	
	printf("\n");
	printf("%f in celsius is %f in fahrenheit",c,f);
}
