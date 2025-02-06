#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define MAX 100

int main(){
	int a[MAX],i,max,min,n;
	srand(time(NULL));
	do{
		printf("Nhap n [1,99]:");
		scanf("%d",&n);
	}while(n<0||n>99);
	
	for(i=0;i<n;++i)
	printf("%d ",a[i]=rand()%201-100);
	max=min=0;
	for(i=0;i<n;++i){
		if(a[i]>a[max]) max=i;
		if(a[i]<a[min]) min=i;
	}
	printf("\nmax = %d\nmin = %d",a[max],a[min]);
	
	for(i=max+1;i<n;++i){
		if(a[i]==a[max]) a[i--]=a[--n];
	}
	putchar('\n');
	for(i=0;i<n;++i)
	printf("%d ",a[i]);
	return 0;
}
