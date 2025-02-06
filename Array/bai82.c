#include<stdio.h>
#define MAX 100
void output(int a[],int n,char* s){
	int i;
	printf("%s: {",s);
	for(i=0;i<n;++i)
	printf("%d%s",a[i],(i==n-1)?"}\n":", ");
}
int isMember(int a[],int n,int x){
	int i;
	for(i=0;i<n;++i)
	if(x==a[i]) return 1;
	return 0;
}
int main(){
	int a[MAX],x,n,i;
	printf("Nhap khong qua 100 phan tu (Ctrl+Z de dung):\n");
	for(n=i=0;scanf("%d",&x)==1&&i<MAX;++i)
	if(!isMember(a,n,x)) a[n++]=x;
	output(a,n,"Tap hop A");
	return 0;
}
