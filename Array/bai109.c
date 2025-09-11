// bai 109
// author: bvl

#include<stdio.h>

int main(){
	int a[5][5],n,i,j,k,v;
	n=5;v=1;
	for(k=-n+1;k<n;++k)
	for(i=0;i<n;++i)
	for(j=0;j<n;++j)
		if(j==n-i-1+k)
			if(k%2) a[j][i]=v++;
			else a[i][j]=v++;
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j) printf("%3d",a[i][j]);
	return 0;
}
