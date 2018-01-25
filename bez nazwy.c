#include <stdio.h>

int main()
{
double a,b,p;
scanf("%lf",&b);
scanf("%lf",&a);
if(a>0){
	if(b>0){
p=a*b;
printf("%lf",p);}
else
{
	printf("zle wartosci");
	}
}
else
{
	printf("zle wartosci");
	}
return 0;
}

