#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 4
#define swap(a,b){int t=a;a=b;b=t;}

void randomArr(int a[][MAX],int n){
	int i,j;
	srand(time(NULL));
	for(i=0;i<n;++i)
	for(j=0;j<n;++j)
	a[i][j]=rand()%201-100;
	putchar('\n');
}
void order(int a[][MAX],int n){
	int i,j,k;
	int b[n*n];
	// sao chep sang mang 1 chieu
	for(i=0;i<n;++i)
		memmove(&b[i*n],&a[i][0],n*sizeof(**a));
	putchar('\n');
	for(i=0;i<n*n-1;++i)
	for(j=i+1;j<n*n;++j)
	if(b[i]>b[j]) swap(b[i],b[j]);
	putchar('\n');
	// sao chep tro lai mang 2 chieu
	for(i=0;i<n;++i)
	memmove(&a[i][0],&b[i*n],n*sizeof(**a));
}
void outputArr(int a[][MAX],int n){
	int i,j;
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j)
	printf("%3d ",a[i][j]);
	putchar('\n');
}

int main(){
	int a[MAX][MAX];
	randomArr(a,MAX);
	printf("Mang goc:\n");
	outputArr(a,MAX);
	order(a,MAX);
	printf("Mang sau khi sap xep:\n");
	outputArr(a,MAX);
	return 0;
}
