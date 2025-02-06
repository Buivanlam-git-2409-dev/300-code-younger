#include<stdio.h>

int isPrime(int x){
	if(x==2||x==3||x==5) return 1;
	if(x<2||x%2==0||x%3==0||x%5==0) return 0;
	for(int i=7;i*i<=x;i+=6)
	if(x%i==0) return 0;
	return 1;
}
int main(){
	int n,i;
	printf("Nhap n: ");
	scanf("%d",&n);
	if(isPrime(n)) printf("%d la so nguyen to!\n",n);
	else{
		printf("%d khong la snt!\n",n);
		while(!isPrime(--n)){}
		printf("So nguyen to be hon gan nhat: %d\n",n);
	}
	return 0;
}
