/*Program to calculate area and circumference of circle*/
#include<stdio.h>
#include<conio.h>
float pi = 3.14;
void main()
{
	float r,ar = 0,cf = 0;
	
	printf("Enter the Radius of the circle \n");
	scanf("%f",&r);
	
	ar = pi * r *r;
	cf = 2 * pi * r;
	
	printf("Area of the circle is %f ",ar);
	printf("\n");
	printf("Circumference of circle is %f", cf);
	
	getch();
	
}
