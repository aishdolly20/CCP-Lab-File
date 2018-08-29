/*Program to calculate simple interest and compound interest*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int p;
	float r,t,si = 0, ci  = 0,n,x;
	
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
	
	x = n*t;
	ci = p*(1+pow(r/n,x));
	
	printf("Compound interest is %f",ci);
	
	getch();
}
