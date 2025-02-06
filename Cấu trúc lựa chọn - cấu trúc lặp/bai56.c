#include<stdio.h>
#include<limits.h>

void printBits(int n){
	int size=sizeof(int)*CHAR_BIT;
	printf("%d = ",n);
	while(--size>=0){
		putchar(((n>>size)&1)+'0');
		if(size%CHAR_BIT==0) putchar(' ');
	}
	putchar('\n');
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printBits(n);
	printf("Hex: %X\n",n);
	return 0;
}
