#include<stdio.h>
#define MAX 100

int main(){
	int a[MAX],max,oldmax,pos,n,i,j,cnt;
	do{
		printf("Nhap n[1,%d]:",MAX-1);
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	printf("Nhap %d phan tu: \n",n);
	for(i=0;i<n;++i) scanf("%d",a+i);
	printf("Cac phan tu xuat hien nhieu nhat:\n");
	oldmax=0;
	pos=-1;
	do{
		max=0;
		for(i=pos+1;i<n;++i){
			for(cnt=1,j=i+1;j<n;++j)
			if(a[j]==a[i]) cnt++;
			if(cnt>max){
				max=cnt; pos=i;
			}
		}
		if(max>=oldmax){
			printf("%d[%d] ",a[pos],max);
			oldmax=max;
		}
	}while(max==oldmax);
	putchar('\n');
	return 0;
}
