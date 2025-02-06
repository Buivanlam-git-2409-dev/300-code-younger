#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

int main(){
	int a[MAX],i,head,n,maxlen,maxhead;
	
	srand(time(NULL));
	do{
		printf("Nhap n[1,99]: ");
		scanf("%d",&n);
	}while(n<1||n>99);
	for(i=0;i<n;++i) //printf("%d ",a[i]=rand()%201-100);
	scanf("%d",a+i);
	putchar('\n');
	head=maxhead=maxlen=0;
	do{
		int len=1;
		for(i=head;i<n-1&&a[i]<a[i+1];++i) len++;
		if(len>maxlen){
			maxlen=len;maxhead=head;
		}
		head=i+1;
	}while(head<n);
	printf("\"run\" tang dai nhat: ");
	for(i=0;i<maxlen;++i) printf("%d ",a[maxhead+i]);
	putchar('\n');
	return 0;
}
