#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,a[3][3],b[3][3],c[3][3];
	printf("Enter elements of 1st matrix=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("1st Matrix=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter elements of 2nd matrix=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d]= ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("2nd Matrix=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\nMultiplication of Matrix= \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
