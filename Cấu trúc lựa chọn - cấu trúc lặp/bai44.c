#include<stdio.h>

int main(){
	unsigned i,j,n;
	printf("Nhap n: ");
	scanf("%u",&n);
	// tam giac dac
	for(i=1;i<=n;++i,putchar('\n'))
	for(j=1;j<=n+i-1;++j)
	printf((j<n-i+1)?"  ":"* ");
	
	for(i=1;i<=n;++i,putchar('\n'))
	for(j=1;j<=2*n-1;++j)
	printf((j==n-i+1)||(j==n+i-1)||(i==n)?"* ":"  ");
	return 0;
}
