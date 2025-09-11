// bai 107
// author: bvl
#include<stdio.h>
int main(){
	int a[5][5],n,i,j,v;
	n=5;v=1;
	for(i=0;i<n;++i)
	for(j=0;j<n;++j)
		if(i%2) a[i][n-j-1]=v++;
		else a[i][j]=v++;
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j) printf("%3d",a[i][j]);
	return 0;
}
