#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
	int id;
	char name[100];
	char address[100];
	int age;
}e1,e2,e3,e4,e5;
void main()
{
	e1.id=106007;
	strcpy(e1.name,"Ankit Bharambe");
	strcpy(e1.address,"Omkar Nagar, Nagpur");
	e1.age=25;
	printf("Employee 1 id=%d\n",e1.id);
	printf("Employee 1 name=%s\n",e1.name);
	printf("Employee 1 address=%s\n",e1.address);
	printf("Employee 1 age=%d\n\n",e1.age);
	e2.id=106010;
	strcpy(e2.name,"Pawan Salwe");
	strcpy(e2.address,"Ajni, Nagpur");
	e2.age=26;
	printf("Employee 2 id=%d\n",e2.id);
	printf("Employee 2 name=%s\n",e2.name);
	printf("Employee 2 address=%s\n",e2.address);
	printf("Employee 2 age=%d\n\n",e2.age);
	e3.id=106015;
	strcpy(e3.name,"Tanmay Vispute");
	strcpy(e3.address,"Rly colony, Nagpur");
	e3.age=25;
	printf("Employee 3 id=%d\n",e3.id);
	printf("Employee 3 name=%s\n",e3.name);
	printf("Employee 3 address=%s\n",e3.address);
	printf("Employee 3 age=%d\n\n",e3.age);
	e4.id=106016;
	strcpy(e4.name,"Akshay Dahule");
	strcpy(e4.address,"Chandrapur");
	e4.age=24;
	printf("Employee 4 id=%d\n",e4.id);
	printf("Employee 4 name=%s\n",e4.name);
	printf("Employee 4 address=%s\n",e4.address);
	printf("Employee 4 age=%d\n\n",e4.age);
	e5.id=106017;
	strcpy(e5.name,"Amit Bhoyar");
	strcpy(e5.address,"Chitanvispura, Nagpur");
	e5.age=27;
	printf("Employee 5 id=%d\n",e5.id);
	printf("Employee 5 name=%s\n",e5.name);
	printf("Employee 5 address=%s\n",e5.address);
	printf("Employee 5 age=%d\n\n",e5.age);
	getch();
}
