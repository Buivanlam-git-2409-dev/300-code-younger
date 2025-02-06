#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 100
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)

typedef struct{
	int min,max;
}MINMAX;

MINMAX minmax(int a,int b){
	return a<b?(MINMAX){a,b}:(MINMAX){b,a};
}
MINMAX find(int a[],int n){
	int i;
	if(n==1) return (MINMAX){a[0],a[0]};
	MINMAX p = minmax(a[0],a[1]);
	for(i=2;i+1<n;i+=2){
		MINMAX t = minmax(a[i],a[i+1]);
		p = (MINMAX) {min(p.min,t.min),max(p.max,t.max) };
	}
	if(n%2) p = (MINMAX){min(p.min,a[n-1]),max(p.max,a[n-1]) };
	return p;
}
int main(){
	int a[MAX],i,n;
	MINMAX elemnts;
	srand(time(NULL));
	do{
		printf("Nhap n[1,99]:");
		scanf("%d",&n);
	}while(n<0||n>99);
	for(i=0;i<n;++i)
	printf("%d ",a[i]=rand()%201-100);
	
	elemnts=find(a,n);
	printf("\nmax = %d\nmin = %d\n",elemnts.max,elemnts.min);
	return 0;
}
