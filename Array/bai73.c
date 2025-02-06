#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main(){
	int a[MAX],i,n,j;
	do{
		printf("Nhap n[1,99]:");
		scanf("%d",&n);
	}while(n<1||n>99);
	printf("Nhap %d phan tu:",n);
	for(i=0;i<n;++i) scanf("%d",&a[i]);
	putchar('\n');
	for(i=0;i<n;++i){
		for(j=0;j<i;++j)
		if(a[j]==a[i]) break;
		if(j==i) printf("%d ",a[i]);
	}
	return 0;
}
