#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 20

void maxAbs(int a[][MAX],int n,int *maxr,int *maxc){
	int i,j;
	*maxr=*maxc=0;
	for(i=0;i<n;++i)
	for(j=0;j<n;++j)
		if(abs(a[i][j])>abs(a[*maxr][*maxc])){
			*maxr=i;*maxc=j;
		}
}

int main(){
	int a[MAX][MAX],b[MAX][MAX];
	int n,i,j,maxr,maxc;
	
	srand(time(NULL));
	do{
		printf("Nhap bac ma tran (n>1):");
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	//
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j)
	printf("%5d",a[i][j]=rand()%201-100);
	//
	maxAbs(a,n,&maxr,&maxc);
	for(i=0;i<n;++i)
	for(j=0;j<n;++j){
		/*
		if( i>maxr) b[i-1][j]=a[i][j]; // don dong
		if( j>maxc) b[i][j-1]=a[i][j]; // don cot
		else // don ca dong lan cot
			if((i>maxr)&&(j>maxc)) b[i-1][j-1]=a[i][j];
			else b[i][j]=a[i][j]; //ko thay doi
			*/
		// tu do ta suy ra duoc ct sau:
		b[i-(i>maxr)][j-(j>maxc)]=a[i][j];
	}
	
	printf("Ma tran B:\n");
	for(i=0;i<n-1;++i,putchar('\n'))
	for(j=0;j<n-1;++j) printf("%5d",b[i][j]);
	return 0;
}
