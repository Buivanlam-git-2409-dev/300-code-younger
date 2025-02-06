#include<stdio.h>
#include<math.h>

int main(){
	unsigned n,i,s;
	printf("Nhap n: ");
	scanf("%u",&n);
	for(s=0,i=1;i<=n;++i)
	s+=i*i*i;
	printf("Ve trai: %u\nVe phai: %u\n",s,(n*n*(n+1)*(n+1))/4);
	return 0;
}
