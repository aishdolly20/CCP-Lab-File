/*Program to accept marks of 5 subject and calculate their percentage*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,sum = 0;
	float per;
	
	printf("Enter marks of the subject A \n");
	scanf("%d",&a);
	printf("Enter marks of the subject B \n");
	scanf("%d",&b);
	printf("Enter marks of the subject C \n");
	scanf("%d",&c);
	printf("Enter marks of the subject D \n");
	scanf("%d",&d);
	printf("Enter marks of the subject E \n");
	scanf("%d",&e);
	
	per = (a+b+c+d+e)/5;
	
	printf("Percentage of the student is: %f",per);
	
	getch();
}
