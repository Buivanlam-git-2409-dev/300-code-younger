#include<stdio.h>

int main(){
	unsigned i,n,j;
	printf("Nhap n: ");
	scanf("%u",&n);
	for(i=1;i<=2*n-1;++i,putchar('\n'))
	for(j=1;j<=2*n-1;++j)
	if((j>=i&&j<=2*n-i)||(j<=i&&j>=2*n-i))
	printf("* ");
	else printf("  ");
	putchar('\n');
	for(i=1;i<=2*n-1;++i,putchar('\n'))
	for(j=1;j<=2*n-1;++j)
	if(j==i||i==1||i==2*n-1||j==2*n-i) printf("* ");
	else printf("  ");
	return 0;
}
