#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define MAX 100
#define swap(a,b) {int t=a;a=b;b=t;}

int main(){
	int a[MAX],n,i,j,i1,j1,k;
	srand(time(NULL));
	do{
		printf("Nhap n (n chan): ");
		scanf("%d",&n);
	}while(n<2||n%2);
	for(i=0;i<n;++i) printf("%d ",a[i]=rand()%101+100);
	putchar('\n');
	
	for(k=0;k=n/2;++k){
		int min=101;
		for(i=k;i<n-k;++i)
		for(j=i+1;j<n-k;++j){
			if(abs(a[i]-a[j])<min){
				min=abs(a[i]-a[j]);
				i1=i;
				j1=j;
			}
			if(a[i1]<a[j1]) swap(a[i1],a[j1]);
			swap(a[i1],a[k]); // chuyen ve dau mang
			swap(a[j1],a[n-k-1]); // chuyen ve cuoi mang
		}
	}
	for(j=i=0;i<n/2;++i){
		printf("%d ",a[i]);
		j+=a[i];
	}
	printf(" %d\n",j);
	for(j1=0;i<n;++i){
		printf("%d ",a[i]);
		j1+=a[i];
	}
	printf(": %d\n",j1);
	printf("Hieu nho nhat = %d\n",j-j1);
	return 0;
}
