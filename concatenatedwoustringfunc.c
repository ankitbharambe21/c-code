#include<stdio.h>
#include<conio.h>
void main()
{
	char a0[100],a1[100];
	int i,j;
	printf("Enter string a0: ");
	gets(a0);
	printf("Enter string a1: ");
	gets(a1);
	for(i=0;a0[i]!='\0';i++);
	for(j=0;a1[j]!='\0';j++,i++)
	{
		a0[i]=a1[j];
	}
	a0[i]='\0';
	printf("\nConacatenated String: %s",a0);
	getch();
}
