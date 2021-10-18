#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[10],ele,flag=0;
	printf("Enter array Elements= \n");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",a[i]);
	}
	printf("Enter element to search= ");
	scanf("%d",&ele);
	for(i=0;i<10;i++)
	{
		if(a[i]==ele)
		{
			printf("%d found at position=%d",ele,i);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
	printf("%d not found",ele);
	}
	getch();
}
