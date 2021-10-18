#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	float r,l,b,a,c,d,s,h,base;
	float AOC,AOR,AOT;
	printf("1.Area of circle \n2.Area of Triangle \n3.Area of Ractangle");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Enter Radius in cm =");
		scanf("%f",&r);
		AOC=(float)3.14159*r*r;
		printf("Area of Circle=%.2f sqcm",AOC);
	}
	else if(choice==2)
	{
		printf("Enter sides of Triangle=");
		scanf("%f %f %f",&a,&d,&c);
		s=(float)(a+d+c)/2;
		AOT=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
		printf("Area of Triangle=%.2f sqcm",AOT);
	}
	else if(choice==3)
	{
		printf("Enter length and breadth=");
		scanf("%f %f",&l,&b);
		AOR=(float)l*b;
		printf("Area of Rectangle=%.2f sqcm",AOR);
	}
	else
	{
		printf("Invalid Choice");
	}
	getch();
}
