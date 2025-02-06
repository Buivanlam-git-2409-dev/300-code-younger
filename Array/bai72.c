#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#include<time.h>
void isMaxOdd(int a[],int n){
	int i,max,i1;
	max=a[0];
	for(i=0;i<n;++i)
	if(a[i]%2&&a[i]>max){
		max=a[i];
		i1=i;
	}
	printf("Phan tu le lon nhat: a[%d]: %d",i1,max);
}
void rshiftArray(int a[],int n,int k){
	int i,t;
	for(i=0;i<k;++i){
		t=a[n-1];
		memmove(a+1,a,(n-1)*sizeof(*a));
		a[0]=t;
	}
}

int main(){
	int a[MAX],i,n;
	srand(time(NULL));
	do{
		printf("Nhap n [1,99]:");
		scanf("%d",&n);
	}while(n<1||n>99);
	for(i=0;i<n;++i) printf("%d ",a[i]=rand()%201-100);
	putchar('\n');
	isMaxOdd(a,n);
	putchar('\n');
	int k;
	printf("Nhap so lan can dich: ");
	scanf("%d",&k);
	k%=n;
	rshiftArray(a,n,k);
	putchar('\n');
	for(i=0;i<n;++i) printf("%d ",a[i]);
	return 0;
}
