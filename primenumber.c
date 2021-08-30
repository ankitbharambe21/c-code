#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,r,flag;
	printf("Enter the Number = ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	r=n/2;
	for(i=2;i<=r;i++)
	{
		if(n%i==0)
		{
			printf("%d is not prime number",n);
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is prime number",n);
	}
	getch();
}
