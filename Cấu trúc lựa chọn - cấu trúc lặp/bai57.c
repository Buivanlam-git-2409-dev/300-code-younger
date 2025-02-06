#include<stdio.h>

unsigned parity(int n){
	unsigned b=0;
	do b^=(n&1); while(n>>=1);
	return b;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Even parity bit = %u\n",parity(n));
	return 0;
}
