#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 20

int main(){
	int a[MAX][MAX],k,n,j,i;
	do{
		printf("Nhap bac ma tran: ");
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	srand(time(NULL));
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j)
	printf("%5d",a[i][j]=rand()%201-100);
	
	printf("Cac duong cheo song song cheo phu:\n");
	for(k=-n+1;k<n;++k,putchar('\n'))
	for(i=0;i<n;++i)
	for(j=0;j<n;++j)
		if(j==n-i+k-1)
		printf("%5d",a[i][j]);
	return 0;
}
