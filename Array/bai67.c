#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
int main(){
	int n,i,j,a[MAX],t;
	do{
		printf("Nhap n [1,99]: ");
		scanf("%d",&n);
	}while(n<1||n>99);
	srand(time(NULL));
	for(i=0;i<n;++i)
	printf("%d ",a[i]=rand()%201-100);
	putchar('\n');
	for(i=0;i<n-1;++i){
		for(j=j+1;j<n;++j){
			if(a[i]%2&&a[j]%2&&a[i]<a[j]||
			a[i]%2==0&&a[j]%2==0&&a[i]>a[j]){
				t=a[i];a[i]=a[j];a[j]=t;
			}
		}
	}
	for(i=0;i<n;++i)
	printf("%d ",a[i]);
	putchar('\n');
	return 0;
}
