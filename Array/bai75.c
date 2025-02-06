#include<stdio.h>
#define MAX 100

int main(){
	int a[MAX],n,i,j,cnt,max,min,pos;
	do{
		printf("Nhap n[1,%d]: ",MAX-1);
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	printf("Nhap %d phan tu: \n",n);
	for(i=0;i<n;++i) scanf("%d",&a[i]);
	putchar('\n');
	
	printf("Phan tu xuat hien nhieu nhat: ");
	pos = max = 0;
	for(i=0;i<n;++i){
		for(cnt=1,j=i+1;j<n;++j)
		if(a[i]==a[j]) cnt++;
		if(cnt>max){
			max=cnt;
			pos=i;
		}
	}
	printf("%d[%d]\n",a[pos],max);
	printf("Phan tu xuat hien it nhat: ");
	pos = 0;min=n;
	for(i=0;i<n;++i){
		for(cnt=j=0;j<n;++j)
		if(a[j]==a[i]){
			if(j<i) break;
			else cnt++;
		}
		if(cnt&&cnt<min){
			min=cnt;pos=i;
		}
	}
	printf("%d[%d]\n",a[pos],min);
	return 0;
}
