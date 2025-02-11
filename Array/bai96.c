#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 20
#include<math.h>

int main(){
	int i,j,n,cnt;
	float a[MAX][MAX];
	do{
		printf("Nhap bac ma tran:");
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	//
	for(cnt=i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j){
		printf("%10.6f",a[i][j]=sin(i-2*j/M_PI));
		if(a[i][j]>=0) cnt++;
	}
	putchar('\n');
	printf("Co %d phan tu khong am\n",cnt);
	return 0;
}
