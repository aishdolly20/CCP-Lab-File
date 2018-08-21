/*WAP to print greatest of three numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	
	printf("Enter First number \n");
	scanf("%d",&a);
	printf("Enter Second number \n");
	scanf("%d",&b);
	printf("Enter Third number \n");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(b<c)
		{
			printf("%d is greatest",c);
		}
		else
		{
			printf("%d is greatest",b);
		}
	}
	
	else
	{
		if(a<c)
		{
			printf("%d is greatest",c);
		}
		else
		{
			printf("%d is greatest",a);
		}
	}
}
