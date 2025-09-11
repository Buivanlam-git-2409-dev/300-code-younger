// bai 108
// author: bvl

#include<stdio.h>
#define MAX 20
#define AK a[i][j]=++k; if(k==n*n) goto RET;

int main(){
	int a[MAX][MAX],i,j,k,n;
	printf("Nhap bac ma tran (n<20):");
	scanf("%d",&n);
	i=j=k=0;
	while(1){
	do{AK; j++;} while(j<n-i-1);
	do{AK; i++;} while(j>i);
	do{AK; j--;} while(j>n-i-1);
	do{AK; i--;} while(j<i-1);
	}
	RET:
		for(i=0;i<n;++i,putchar('\n'))
		for(j=0;j<n;++j) printf("%3d",a[i][j]);
	return 0;
}
