#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 100

int main(){
	int i,a[max],n,cnt;
	do{
		printf("Nhap n [1,99]: ");
		scanf("%d",&n);
	}while(n<1||n>99);
	for(i=0;i<n;++i)
	printf("%d ",a[i]=rand()%201-100);
	for(i=0;i<n;++i){
		if(a[i]%4==0&&abs(a[i])%10==6) cnt++;
		if(i%2) a[i]*=2;
	}
	putchar('\n');
	printf("Co %d phan tu chia het cho 4, tan cung la 6",cnt);
	printf("\nNhan doi phan tu le:\n");
	for(i=0;i<n;++i)
	printf("%d ",a[i]);
	return 0;
}
