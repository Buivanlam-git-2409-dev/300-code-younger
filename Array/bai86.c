#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 20
#define swap(a,b){int t=a;a=b;b=t;}
void createArr(int a[MAX][MAX],int n){
	int i,j;
	srand(time(NULL));
	for(i=0;i<n;++i)
	for(j=0;j<n;++j)
		a[i][j]=rand()%201-100;
	putchar('\n');
}
void printArr(int a[MAX][MAX],int n){
	int i,j;
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j)
	printf("%5d ",a[i][j]);
	putchar('\n');
}

void sorted(int a[MAX][MAX],int n){
	int i,j,k,s;
	int b[MAX];
	int c[MAX];
	// tong cac gia tri cua hang va cot vao mang b
	for(s=i=0;i<n;++i){
		for(j=0;j<n;++j)
		s+=a[i][j];
		b[i]=s;
	}
	// sx mang b,keo theo sx cac cot mang a
	for(i=0;i<n-1;++i)
	for(j=i+1;j<n;++j)
	if(b[i]>b[j]){
		swap(b[i],b[j]);
		// hoan chuyen cot a[][i] voi a[][j]
		for(k=0;k<n;++k)
		swap(a[k][i],a[k][j]);
	}	
	printArr(a,n);
	putchar('\n');
	// giai thuat cong theo chieu doc
	for(i=0;i<n;++i){
		for(j=0;j<n;++j)
		s+=a[j][i];
		c[i]=s;
	}
	for(i=0;i<n;++i)
	printf("%5d ",c[i]);
}
int main(){
	int i,j,a[MAX][MAX],n;
	do{
		printf("Nhap n (n<%d):",MAX);
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	createArr(a,n);
	printArr(a,n);
	printf("Mang sau khi da sx:\n");
	sorted(a,n);
	return 0;
}
