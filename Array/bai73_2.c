#include<stdio.h>
#define MAX 100

int main(){
	unsigned a[MAX],n,i,t,j;
	do{
		printf("Nhap n[1,99]: ");
		scanf("%u",&n);
	}while(n<1||n>99);
	printf("Nhap %u phan tu: ",n);
	
	for(i=0;i<n;++i)
	while(a[i]!=i){
		if(a[i]==a[a[i]]) break;
		
		t=a[i];a[i]=a[t];a[t]=t;
	}
	putchar('\n');
	for(i=0;i<n;++i) if(a[i]==i) printf("%u ",a[i]);
	return 0;
}
