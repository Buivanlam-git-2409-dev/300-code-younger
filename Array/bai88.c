#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 20

int isIdentity(int a[MAX][MAX],int n){
	int i,j;
	for(i=0;i<n;++i)
	for(j=0;j<n;++j){
		if(i!=j&&a[i][j]!=0) return 0;
		if(i==j&&a[i][j]!=1) return 0;
	}
	return 1;
}
int main(){
	int a[MAX][MAX],n,i,j;
	printf("Nhap bac ma tran: ");
	scanf("%d",&n);
	srand(time(NULL));
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j)
	printf("%5d",a[i][j]=rand()%201-100);
	if(isIdentity(a,n)) printf("Ma tran dong nhat\n");
	else{
		printf("Ma tran tren khong dong nhat\n");
		for(i=0;i<n;++i,putchar('\n'))
		for(j=0;j<n;++j) printf("%5d",i==j);
	}
	return 0;
}
