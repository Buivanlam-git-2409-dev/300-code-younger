#include<stdio.h>

int main(){
	unsigned n,i,j;
	printf("Nhap n (n<5): ");
	scanf("%u",&n);
	
	for(i=1;i<=2*n-1;++i,putchar('\n'))
	for(j=1;j<=2*n-1;++j)
	if((j<=i&&j<=2*n-i)||(j>=i&&j>=2*n-i))
	printf("%2u",j);
	else printf("  ");
	return 0;
}
