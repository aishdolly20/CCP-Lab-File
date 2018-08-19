/*Program to calculate simple interest and compound interest*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int p;
	float r,t,si = 0, ci  = 0,n;
	
	printf("Enter principle amount \n");
	scanf("%d",&p);
	printf("Enter Rate of Interest \n");
	scanf("%f",&r);
	printf("Enter Time \n");
	scanf("%f",&t);
	
	r = r / 100;
	si = (p * r * t);
	
	printf("Simple Interest for %f years and on %f interest is %f",r,t,si); 
	
	printf("Enter the number of times interest is compunded per year \n");
	scanf("%f",n);
	
	ci = p*(1+(r/n))(n*t);
	
	printf("Compound interest is %f",ci);
	
	getch();
}
