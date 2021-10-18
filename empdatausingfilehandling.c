#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *emp;
	int id,i,n;
	char name[200];
	float salary;
	emp=fopen("E:\\empdata.doc","w+");
	if(emp==NULL)
	{
		printf("File doesn't exist....");
		return;
	}
	printf("Enter no. of iteration: ");
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{
	
		printf("\nEnter ID: ");
		scanf("%d",&id);
		fprintf(emp,"\n\nID: %d",id);
		printf("Enter Name: ");
		scanf("%s",&name);
		fprintf(emp,"\nName: %s",name);
		printf("Enter Salary: ");
		scanf("%f",&salary);
		fprintf(emp,"\nSalary: %.2f",salary);
	}
	fclose(emp);
	getch();
}
