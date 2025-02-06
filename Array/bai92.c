#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 20
int main(){
	int a[MAX][MAX],k,s,maxsum,n,i,j,maxpos;
	do{
		printf("Nhap bac ma tran: ");
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	srand(time(NULL));
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j)
		printf("%5d",a[i][j]=rand()%201-100);
	maxsum=-101;
	for(k=-n+1;k<n;++k){
		for(s=i=0;i<n;++i)
		for(j=0;j<n;++j)
		if(j==i+k) s+=a[i][j];
		if(s>maxsum){maxsum=s;maxpos=k;}
		
	}
	printf("Duong cheo co tong lon nhat:\n");
	for(i=0;i<n;++i)
	for(j=0;j<n;++j)
		if(j==i+maxpos) printf("%d ",a[i][j]);
	printf(": %d\n",maxsum);
	return 0;
}
