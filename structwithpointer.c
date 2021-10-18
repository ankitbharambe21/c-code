#include<stdio.h>
#include<conio.h>
struct emp
{
	int empno;
	char ename;
	
};
void main()
{
	struct emp e1;
	struct emp *e2;
	e2=e1;
	e2->empno=101;
	e2->ename="Ankit";
	printf("Employee ID-%d",e2->empno);
	printf("\nEmployee Name-%c",e2->ename);
	getch();
}
