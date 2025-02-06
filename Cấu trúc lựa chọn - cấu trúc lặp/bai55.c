#include<stdio.h>
#include<math.h>

double babylonian(int x){
	double y=1.0,q,p;
	do{
		p=x/y;
		y=(y+p)/2;
		q=fabs(y-p);
	}while(q>1e-13);
	return y;
}
int main(){
	int x;
	printf("Nhap x (x>0): ");
	scanf("%d",&x);
	printf("Thuat toan babylonian: %g\n",babylonian(x));
	printf("ham sqrt() cua math.h: %g\n",sqrt(x));
	return 0;
}
