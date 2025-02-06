#include<stdio.h>
#include<math.h>

int main(){
	double n,m;
	long t;
	int i=0;
	printf("Nhap mot so double: ");
	scanf("%lf",&n);
	printf("Phan nguyen    : %ld\n",t=(long)n);
	do{
		i++;
		m=n*pow(10,i)-t*pow(10,i);
	}while(n*pow(10,i)-(long)(t*pow(10,i)+m));
	printf("Phan thap phan: %ld\n",(long)m);
	return 0;
}
