#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main(){
	int a[MAX],i,j,b[MAX],n,cnt;
	do{
		printf("Nhap n[1,%d]: ",MAX-1);
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	printf("Nhap %d phan tu:\n",n);
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;++i){
		for(cnt=j=0;j<n;++j)
			if(a[j]==a[i])
				if(j<i) break;
				else cnt++;
			
		if(cnt) printf("%d[%d] ",a[i],cnt);
	}
	return 0;
}
