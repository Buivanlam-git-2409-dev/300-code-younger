// bai 104
// author: bvl
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define MAX 20

int main(){
	int a[MAX][MAX],n,i,j,k,l,max;
	printf("Nhap bac ma tran: ");
	scanf("%d",&n);
	srand(time(NULL));
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j) printf("%5d",a[i][j]=rand()%21-10);
	printf("Ma tran B:\n");
	for(k=0;k<n;++k,putchar('\n'))
	for(l=0;l<n;++l){
		max=-11; // bien 
		for(i=0;i<n;++i) for(j=0;j<n;++j)
		if(abs(i-k)==abs(j-l)&&a[i][j]>max) max=a[i][j];
		printf("%5d",max);
	}
	return 0;
}
