#include<stdio.h>
#include<math.h>

#define eps 1e-4

int main(){
	double x,sinx,fact,expr,expo;
	int sign=-1,i;
	
	printf("Nhap x (radian):");
	scanf("%lf",&x);
	fact=1;
	sinx=expr=expo=x;
	for(i=3;expr>eps;i+=2,sign=-sign){
		expr=(expo*=x*x)/(fact*=i*(i-1));
		sinx+=sign*expr;
	}
	printf("Cong thuc Taylor: %.4lf\n",sinx);
	printf("sin() cua math.h: %.4lf\n",sin(x));
	return 0;
}
