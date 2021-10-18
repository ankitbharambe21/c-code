#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *ptr;
	int n,i;
	printf("Enter number of Elements:");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Sorry! Unable to allocate memory.\n");
		exit(0);
	}
	else
	{
		printf("Memory Allocated successfully.\n");
		for(i=0;i<n;i++)
		{
			printf("Enter Array elements:");
			scanf("%d",&ptr[i]);
		}
		printf("\nThe Elements of Array:\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",ptr[i]);
			
		}
	}
	getch();
}
