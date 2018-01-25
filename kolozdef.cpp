#include <stdio.h>

#ifndef STEPS
	#define STEPS 20
#endif
#ifndef PRECISION
	#define PRECISION 30
#endif

#define SUMA(_v) (_v+_v)

double sin(double x){
	double w=x;
	double x2= x*x;
	double t=w;
	int i;
	for(i=2;i<PRECISION;i+=2){
		t=-t*((x2)/(i*(i+1)));
		w+=t;
	}
	return w;
	
}

int main(){
	double x;
	for(x=-1.570;x<=1.571;x+=3.14/STEPS)
		printf("sin(%lf)=%lf\n",x,sin(x));
		
	int v=2*SUMA(2);
	printf("wynik: %d", v);
		
	return 0;

