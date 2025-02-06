#include<stdio.h>
#include<math.h>
#define MAX 100
int main(){
	int i,j,n;
	int a[MAX]={0};
	printf("Nhap n: ");
	scanf("%d",&n);
	for(i=2;i<=64;i++){
		if(!a[i]){
			printf("%d ",i);
			for(j=2*i;j<=n;j+=i) a[j]=1;
		}
	}
	return 0;
}
