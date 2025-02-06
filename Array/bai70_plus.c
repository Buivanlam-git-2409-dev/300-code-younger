#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

int swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
void Solution(int a[],int n){
	int even=n,odd=0,i=0;
	while(i<even){
		if(a[i]%2) swap(a+odd++,a+i++);
		if(!a[i]) i++;
		else swap(a+i,a+even--);
	}
}
int main(){
	int a[MAX],i,odd,n,even;
	srand(time(NULL));
	do{
		printf("Nhap n[1,99]:");
		scanf("%d",&n);
	}while(n<1||n>99);
	for(i=0;i<n;++i) printf("%d ",a[i]=rand()%210-100);
	putchar('\n');
//	for(odd=i=0;i<n;++i)
//		if(a[i]%2) swap(a+i,a+odd++);
//	for(even=i=n-1;i>=odd;i--)
//		if(a[i]) swap(a+i,a+even--);
	Solution(a,n);
	for(i=0;i<n;++i) printf("%d ",a[i]);
	putchar('\n');
	return 0;
}
