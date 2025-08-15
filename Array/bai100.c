// bai 100
// author: bui van lam
#include<stdio.h>
#define MAX 20
int main(){
	int a[MAX][MAX],n,m,i,j,s;
	printf("Nhap n,m: ");
	scanf("%d%d",&n,&m);
	for(s=i=0;i<n;++i)
	for(j=0;j<m;++j){
		printf("a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
		s+=(!a[i][j]);
	}
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<m;++j) printf("%5d",a[i][j]);
	printf("Ma tran %s\n",(2*s>n*m)?"thua":"khong thua");
	return 0;
}
