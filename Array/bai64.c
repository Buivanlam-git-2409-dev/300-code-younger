#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
#define isPow2(x) (!((x) & ((x)-1)) && x)
int main(){
	int n,a[MAX],i,c,x;
	do{
		printf("Nhap n [1,99]: ");
		scanf("%d",&n);
	}while(n<1||n>99);
	printf("\nNhap %d phan tu: ",n);
	for(i=0;i<n;++i)
	scanf("%d",&a[i]);
	putchar('\n');
	for(c=i=0;i<n;++i)
	if(isPow2(x)) c++;
	printf("Co %d so la luy thua cua 2\n",c);
	printf("Nhap x: ");
	scanf("%d",&x);
	// c1
	for(c=i=0;i<n;++i){
		if(a[i]!=x) a[c++]=a[i];
	}
	// c2
	for(i=0;i<n;++i)
	if(a[i]==x){
		memmove(a+i,a+i+1,(n-i-1)*sizeof(*a));
		i--;
		n--;
	}
	for(i=0;i<c;++i)
	printf("%d ",a[i]);
	return 0;
}
