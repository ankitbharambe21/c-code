#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *p,i,n,m;
	printf("Enter size of array: ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("Sorry! unable to Allocte Memory.\n");
		exit(0);
	}
	else
	{
		printf("Memory Allocted Successfully.\n");
		for(i=0;i<n;i++)
		{
			printf("Enter Element at index %d:",i);
			scanf("%d",&p[i]);
		}
	}
	printf("\nIncreasing the size of array by :");
	scanf("%d",&m);
	p=(int*)realloc(p,m*sizeof(int));
	if(p==NULL)
	{
		printf("Memory Allocation Failed");
		exit(1);
	}
	for(i=n;i<m;i++)
	{
		printf("Enter Elements at Index %d:",i);
		scanf("%d",&p[i]);
	}
	printf("Fianl Array:\n");
	for(i=0;i<m;i++)
	{
		printf("%d\t",p[i]);
		
	}
	getch();
}
