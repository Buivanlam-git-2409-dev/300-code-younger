#include<stdio.h>
#define MAX 100

int main(){
	int a[MAX],b[MAX/2],n,i,j,max,cnt,k;
	do{
		printf("Nhap n[1,%d]:",MAX-1);
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	printf("Nhap %d phan tu:\n",n);
	for(i=0;i<n;++i) scanf("%d",a+i);
	putchar('\n');
	for(i=0;i<n;++i){
		for(cnt=1,j=i+1;j<n;++j)
		if(a[i]==a[j]) cnt++;
		if(cnt>max){
			max=cnt;
			k=i;
		}
	}
	b[0]=a[k];
	k=1;
	for(i=0;i<n;++i){
		for(cnt=1,j=i+1;j<n;++j)
		if(a[i]==a[j]&&a[i]!=b[0]) cnt++;
		if(cnt==max){
			b[k++]=a[i];
		}
	}
	printf("Phan tu xuat hien nhieu nhat:\n");
	for(i=0;i<k;++i) printf("%d[%d] ",b[i],max);
	return 0;
}
