// bai 98
// author: bui van lam

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 20

int main(){
	int A[MAX][MAX],C[MAX][MAX];
	int n,m,i,j;
	
	printf("Nhap n,m: ");scanf("%d%d",&n,&m);
	srand(time(NULL));
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<m;++j) printf("%5d",A[i][j]=rand()%201-100);
	
	printf("Ma tran sau khi quay:\n");
	for(i=0;i<m;++i,putchar('\n'))
	for(j=0;j<n;++j) printf("%5d",C[i][j]=A[n-1-j][i]);
	return 0;
}
