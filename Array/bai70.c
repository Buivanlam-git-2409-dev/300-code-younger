#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
int swap(int*a,int*b){int t=*a;*a=*b;*b=t;}
int *sortAscIndex(int *a,int n){
	int *p = malloc(n*sizeof(int));
	int i,j;
	for(i=0;i<n;++i) p[i]=i;
	int odd,even;
	for(odd=p[i]=0;p[i]<n;++p[i])
	if(a[p[i]]%2) swap(a+p[i],a+odd++);
	for(even=p[i]=n-1;p[i]>=odd;p[i]--)
	if(a[p[i]]) swap(a+p[i],a+even--);
	
	return p;
}

int main(){
	int a[MAX],n,i,j,i1,j1,k,b[MAX];
	int *p;
	srand(time(NULL));
	do{
		printf("Nhap n(n chan): ");
		scanf("%d",&n);
	}while(n<1||n>99);
	
	for(i=0;i<n;++i) printf("%d ",a[i]=rand()%210-100);
	putchar('\n');
//	i1=2;j=0
//	do{
//		for(i=0;i<n;++i){
//			if(i1==2&&a[i]%2) b[j++]=a[i];
//			if(i1==1&&a[i]==0) b[j++]=a[i];
//			if(i1==0&&a[i]%2==0) b[j++]=a[i];
//		}
//	}while(i1--);
	// c2
	p=sortAscIndex(a,n);
	for(i=0;i<n;++i) printf("%d ",a[p[i]]);
	putchar('\n');
	for(i=0;i<n;++i) printf("%d ",a[i]);
	free(p);
	return 0;
}
