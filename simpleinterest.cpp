#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float P,R,T,SI;
	cout<<"Enter Principal Amount= ";
	cin>>P;
	cout<<"Enter Rate Per Annum= ";
	cin>>R;
	cout<<"Enter Time Period= ";
	cin>>T;
	SI=(P*R*T)/100;
	cout<<"Simple Interest= "<<SI;
	getch();
}
