#include"stdio.h"
#include"conio.h"
#define PI 3.14
#define pause() getch()
#define in(text,value);scanf(text,value)
#define out(text,value);printf(text,value)
void main()
{
	float r,a,c;
	out("Enter radius of Circle: ",r)
	in("%f",&r);
	a=(PI*r*r);
	c=2*PI*r;
	out("\nArea of Circle= %0.2f",a);
	out("\nCircumference of Circle= %0.2f",c);
	out("\nFile: %s",__FILE__);
	out("\nDate: %s",__DATE__);
	out("\nTime: %s",__TIME__);
	out("\nLine: %d",__LINE__);
	pause();
}
