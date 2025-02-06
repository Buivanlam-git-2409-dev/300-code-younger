#include<stdio.h>

int main(){
	unsigned sum,n,i;
	sum=0;
	printf("Nhap n: ");
	scanf("%u",&n);
	for(i=n;i>0;i-=2)
	sum+=i;
	printf("S = %u\n",sum);
	return 0;
}
