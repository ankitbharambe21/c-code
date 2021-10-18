#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *a;
	char ch[200];
	a=fopen("E:\\Ankit.txt","a");
	printf("Enter the message :");
	scanf("%s",&ch);
	fprintf(a,"\n%s",ch);
	printf("Your message is appended in Ankit.txt file.");
	fclose(a);
	getch();	
}
