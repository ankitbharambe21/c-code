#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,a,b,c,i,n;
	float d;
	printf("Enter iteration:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		printf("\n\n1.Addition \n2.Substraction \n3.Multiplication \n4.division");
		printf("\nEnter Choice: ");
		scanf("%d",&choice);
		printf("Enter value of a and b = ");
		scanf("%d %d",&a,&b);
		
		switch(choice)
		{
			case 1:
				c=a+b;
				printf("Addition=%d",c);
				break;
			case 2:
				c=a-b;
				printf("Substraction=%d",c);
				break;
			case 3:
				c=a*b;
				printf("Multiplication=%d",c);
				break;
			case 4:
				d=(float)a/b;
				printf("Division=%.2f",d);
				break;
			default:
				printf("Invalid Choice");
		}
	}
	getch();
}
