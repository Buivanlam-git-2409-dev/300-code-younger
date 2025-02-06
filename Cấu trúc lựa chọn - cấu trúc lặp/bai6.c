#include<stdio.h>
#define swap(a,b){a+=b;b=a-b;a-=b;}
int main(){
	int a,b,c;
	printf("Nhap a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b) swap(a,b);
	if(a>c) swap(a,c);
	if(b>c) swap(b,c);
	printf("Tang dan: %d %d %d\n",a,b,c);
	return 0;
}
