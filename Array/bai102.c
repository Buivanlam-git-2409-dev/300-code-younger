// bai 102
// author: bui van lam

#include<stdio.h>
#include<time.h>
#define MAX 20

int main(){
	int a[MAX][MAX],b[MAX][MAX],n,m,i,j;
	
	printf("Nhap n,m:");
	scanf("%d%d",&n,&m);
	
	srand(time(NULL));
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<m;++j)
	printf("%5d",a[i][j]=rand()%201-100);
	
	printf("Ma tran chuyen vi: \n");
	for(i=0;i<m;++i,putchar('\n'))
	for(j=0;j<n;++j) printf("%5d",b[i][j]=a[j][i]);
	return 0;
}
