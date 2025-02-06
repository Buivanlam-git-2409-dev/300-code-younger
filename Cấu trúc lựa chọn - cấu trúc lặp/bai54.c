#include<stdio.h>
#include<math.h>

float combination(int k,int n){
	float i,nfac=1.0;
	for(i=1;i<=k;++i)
	nfac*=((n-i+1)/i);
	return nfac;
}
int main(){
	int n,k;
	float fac=1.0;
	printf("Nhap n,k (k<n<25): ");
	scanf("%d%d",&n,&k);
	printf("C( k, n): %g\n",combination(k,n));
	printf("C( n-k, n): %g\n",combination(n-k,n));
	return 0;
}
