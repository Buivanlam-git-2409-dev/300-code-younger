// bai 105
// author: bvl
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 20

int main(){
	int a[MAX][MAX],n,i,j,s;
	int sumR[MAX]={0};
	int sumC[MAX]={0};
	
	printf("Nhap bac ma tran:");scanf("%d",&n);
	for(i=0;i<n;++i,putchar('\n'))for(j=0;j<n;++j)
	printf("%5d",a[i][j]=rand()%21-10);
	
	for(s=i=0;i<n;s+=sumR[i++])
	for(j=0;j<n;++j){
		sumR[i]+=a[i][j];
		sumC[i]+=a[j][i];
	}
	printf("Ma tran B:\n");
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j)
	printf("%5d",s-(sumR[i]+sumC[j]-a[i][j]));
	return 0;	
}
