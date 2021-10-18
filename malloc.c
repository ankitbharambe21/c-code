#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,i,*ptr,sum=0;
	printf("Enter number of elements:-");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Sorry! Unable to alloacte memory");
		exit(0);
	}
	printf("Enter elements of Array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("Sum=%d",sum);
	free(ptr);
	getch();
}
