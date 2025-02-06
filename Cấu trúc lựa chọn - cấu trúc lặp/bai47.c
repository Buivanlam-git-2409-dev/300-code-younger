#include<stdio.h>

int main(){
	int n,s1,s2,i;
	printf("nhap n: ");
	scanf("%d",&n);
	for(s1=s2=0,i=2;i<=n;i+=2){
		s1+=i;
		s2+=i-1;
	}
	printf("%d\n",n%2?s2:s1);
	return 0;
}
