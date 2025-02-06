#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n,a[100];
	srand(time(NULL));
	int i,s,p;
	
	do{
		printf("Nhap n [1,%d]: ",99);
		scanf("%d",&n);
	}while(n<1||n>99);
	for(i=0;i<n;++i)
	printf("%d ",a[i]=rand()%201-100);
	for(s=i=0;i<n;++i)
	if(a[i]>0) s+=a[i];
	printf("\nTong cac so nguyen duong = %d\n",s);
	
	do{
		printf("Nhap p [0,%d]: ",n-1);
		scanf("%d",&p);
	}while(p<0||p>n-1);
	for(i=p;i<n;++i){
		a[i]=a[i+1];
	}
	n--;
	
	for(i=0;i<n-1;++i) printf("%d ",b[i]);
	putchar('\n');
	return 0;
}
