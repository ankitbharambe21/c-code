#include<stdio.h>
#include<conio.h>
void main()
{
	int add,mod,sub,mul,a,b;
	float div;
	printf("Enter two integers = ");
	scanf("%d %d",&a,&b);
	printf("a=%d b=%d",a,b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=(float)a/b;
	mod=a%b;
	printf("\nAddition=%d",add);
	printf("\nSubstraction=%d",sub);
	printf("\nMultiplication=%d",mul);
	printf("\nDivision=%.2f",div);
	printf("\nModulus=%d",mod);	
	
}
