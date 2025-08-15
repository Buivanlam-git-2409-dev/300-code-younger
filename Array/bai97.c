// bai 97
// author: bui van lam

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 20


int minPos(int a[][MAX],int i,int j){
	int k;
	for(k=j-1;k<=j+1;++k)
	if((a[i-1][k]<a[i][j]) || (a[i+1][k]<=a[i][j]) ||
		(a[i][j-1]<=a[i][j]) || (a[i][j+1]<=a[i][j]))
		return 0;
	return 1;
}

int main(){
	int a[MAX][MAX];int n,m,i,j;
	printf("Nhap n,m: ");scanf("%d%d",&n,&m);
	srand(time(NULL));
	for(i=1;i<=n;++i,putchar('\n'))
	for(j=1;j<=m;++j)	printf("%5d",a[i][j]=rand()%201-100);
	
	// tao bien cho ma tran
	for(j=0;j<=m+1;++j)	a[0][j] = a[n+1][j]=101;
	for(i=1;i<=n;++i) 	a[i][0] = a[i][m+1]=101;
	printf("Ma tran cuc tieu:\n");
	for(i=1;i<=n;++i,putchar('\n'))
	for(j=1;j<=m;++j) printf("%5d",minPos(a,i,j));
	return 0; 
}
