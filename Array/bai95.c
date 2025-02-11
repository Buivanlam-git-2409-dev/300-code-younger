#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 20

int main(){
	int a[MAX][MAX],b[MAX][MAX];
	int i,n,k,j;
	srand(time(NULL));
	do{
		printf("Nhap bac cua ma tran: ");
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j)
		printf("%5d",a[i][j]=rand()%201-100);
	//
	do{
		printf("Nhap k: ");
		scanf("%d",&k);
	}while(k>=n);
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j)
		printf("%5d",b[i][j]=(i==k||j==k)?a[j][i]:a[i][j]);
	return 0;
}
