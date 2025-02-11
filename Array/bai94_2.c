#include<stdio.h>
int comp(int a,int b){
	return (a>b)-(a<b);
}
// cho ra ba kq: -1, 0, 1
int main(){
	char op[]={'<','=','>'};
	int a,b,c,d,z;
	printf("Nhap a b c d: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d/%d %c %d/%d\n",a,b,op[comp(a*d,c*b)+1],c,d);
	return 0;
}
