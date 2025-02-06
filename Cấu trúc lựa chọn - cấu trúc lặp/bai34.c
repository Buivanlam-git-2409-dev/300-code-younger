#include<stdio.h>
#include<math.h>

#define eps 1e-6

double f(double x){
	return pow(sin(x),2)*cos(x);
}

double rel(double a,double b,int n){
	double result;
	double h=(b-a)/n;
	result=0.5*(f(a)+f(a+n*h));
	for(int i=1;i<n;++i){
		result+=f(a+i*h);
	}
	return result*h;
}

int main(){
	int n=1000000;
	double a=0;
	double b=M_PI/2;
	double t,t1;
	t=rel(a,b,n);
	do{
		t1=t;
		n*=2;
		t=rel(a,b,n);
	}while(fabs(t-t1)/3>eps);
	printf("Ket qua:   %lf\n",t);
	printf("Doi chung: %lf\n",pow(sin(b),3)/3);
	return 0;
}
