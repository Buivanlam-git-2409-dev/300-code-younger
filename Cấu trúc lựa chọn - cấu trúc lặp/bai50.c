#include<stdio.h>
#include<math.h>
#define eps 1e-6
int main(){
	int s,t,r;
	printf("Nhap s,t (0<s<t):");
	scanf("%d%d",&s,&t);
	printf("[");
	do{
		printf("%d ",t/s);
		r=t%s;
		t=s;
		s=r;
		printf(r?",":"]");
	}while(r);
	return 0;
}
