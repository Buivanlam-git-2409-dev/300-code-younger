#include<stdio.h>
#define max 1e10

int main(){
	int n,sum,i,cnt;
	printf("Nhap n:");
	scanf("%d",&n);
	if(n>max) return 0;
	sum=cnt=0;
	printf("Cac uoc so: ");
	for(i=1;i<=n;i++)
	if(n%i==0){
		printf("%d ",i);
		sum+=i;
		cnt++;
	}
	printf("\nCo %d uoc so, tong la: %d",cnt,sum);
	return 0;
}
