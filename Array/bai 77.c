#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
#include<string.h>
double invSum(int a[],int n){
	int i;
	double s=0.0;
	for(i=0;i<n;++i) if(a[i]) s+=1.0/a[i];
	return s;
}
void rmLeftOdd(int a[],int* n){
	int i;
	for(i=0;i<*n-2;++i)
	if((a[i]%2)){
		// a[i+1] chong len doan a[i+2]
		memmove(a+i+1,a+i+2,(*n-i-2)*sizeof(*a));
		(*n)--;
	}
	// het phan tu cuoi roi nen chi can bo qua la duoc
	if((a[*n-2]%2)) (*n)--;
}
int main(){
	int a[MAX],i,n;
	srand(time(NULL));
	do{
		printf("Nhap n[1,%d]:",MAX-1);
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	putchar('\n');
	for(i=0;i<n;++i) printf("%d ",a[i]=rand()%201-100);
	printf("\nTong nghich dao: %g\n",invSum(a,n));
	rmLeftOdd(a,&n);
	for(i=0;i<n;++i) printf("%d ",a[i]);
	putchar('\n');
	return 0;
}
