#include<stdio.h>
#include<conio.h>
int palindrome(int num);
void main()
{
	int num,i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter number: ");
		scanf("%d",&num);
		if(palindrome(num)==0)
		{
			printf("%d is Palindrome\n",num);
		}
		else
		{
			printf("%d is not Palindrome\n",num);
		}
	}
	getch();
}
int palindrome(int num)
{
	int rem,temp,rev=0;
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==temp)
	return 0;
	else
	return 1;
}
