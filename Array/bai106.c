// bai 106
// author: bvl

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 20

int main(){
	int a[MAX][MAX],maxc[MAX],minc[MAX],n,i,j,pmax,pmin;
	printf("Nhap bac ma tran: ");
	scanf("%d",&n);
	srand(time(NULL));
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j) printf("%5d",a[i][j]=rand()%21-10);
	// xac dinh max min cot
	for(j=0;j<n;++j){
		pmax=pmin=0;
		for(i=1;i<n;++i){
			if(a[i][j]>a[pmax][j]) pmax=i;
			if(a[i][j]<a[pmin][j]) pmin=i;
		}
		maxc[j]=pmax;
		minc[j]=pmin;
	}
	// xac dinh max min dong
	for(i=0;i<n;++i){
		pmax=pmin=0;
		for(j=1;j<n;++j){
			if(a[i][j]>a[i][pmax]) pmax=j;
			if(a[i][j]<a[i][pmin]) pmin=j;
		}
		if(i==maxc[pmin]) printf("MIN dong MAX cot: a[%d][%d] = %d\n",i,pmin,a[i][pmin]);
		if(i==minc[pmax]) printf("MAX dong MIN cot: a[%d][%d] = %d\n",i,pmax,a[i][pmax]);
	}
	return 0;
}
