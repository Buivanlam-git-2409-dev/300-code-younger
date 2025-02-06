#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
#define swap(a,b){int t=a;a=b;b=t;}
int main(){
	int a[MAX][MAX],i,j,jmax,n,emax;
	srand(time(NULL));
	do{
		printf("Nhap bac ma tran (n<20): ");
		scanf("%d",&n);
	}while(n<1||n>20);
	// khoi tao ma tran
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j)
	printf("%3d ",a[i][j]=rand()%201-100);
	// hoan chuyen gia tri voi duong cheo chinh
	
	for(i=0;i<n;++i){
		jmax=0;
		for(j=1;j<n;++j)
		if(a[i][j]>a[i][jmax]) jmax=j;
		swap(a[i][i],a[i][jmax]);
	}
	printf("\nMa tran sau khi sap xep:\n");
	// in lai
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j)
		printf("%3d ",a[i][j]);
	return 0;
}
