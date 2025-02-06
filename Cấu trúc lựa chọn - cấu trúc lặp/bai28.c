#include<stdio.h>
#include<math.h>

int main(){
	double x;
	long round;
	unsigned n;
	printf("Nhap so thuc x: ");
	scanf("%lf",&x);
	printf("Do chinh xac: ");
	scanf("%u",&n);
	x*=pow(10,n);
	if(x>0) round=(long)(x+0.5);
	else round=(long)(x-0.5);
	x=round/pow(10,n);
	printf("%.*lf",n>0?n:0,x);
	return 0;
}
