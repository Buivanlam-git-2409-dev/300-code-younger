#include<stdio.h>

int isPrime(int x){
	if(x==2||x==3||x==5) return 1;
	if(x<2||x%2==0||x%3==0||x%5==0) return 0;
	for(int i=7;i*i<=x;i+=6)
	if(x%i==0) return 0;
	return 1;
}
int main(){
	int n,i,j;
	printf("Nhap n: ");
	scanf("%d",&n);
	i=2;
	while(n--){
		printf("%d ",i);
		while(!isPrime(++i)){}
	}
	return 0;
}
