#include<stdio.h>
#include<conio.h>
#include<string.h>
union employee
{
	int eno;
	char ename[20];
	char desig[20];
	float salary;
};
void main()
{
	int i;
	union employee emp[5];
	printf("Enter details of Emolyee-");
	for(i=0;i<5;i++)
	{
		printf("\nEnter Employee ID-");
		scanf("%d",emp[i].eno);
		printf("Enter Employee Name-");
		scanf("%s",emp[i].ename);
		printf("Employee Designation-");
		scanf("%s",emp[i].desig);
		printf("Enter Employee Salary-");
		scanf("%f",emp[i].salary);	
	}
	for(i=0;i<5;i++)
	{
		printf("\nEmployee ID-%d \nEmployee Name-%s \nEmployee Designation-%s \nEmployee Salary-%0.2f",emp[i].eno,emp[i].ename,emp[i].desig,emp[i].salary);
	}
	getch();
}
