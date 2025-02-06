#include<stdio.h>
#define max 1000

int isPrime(int x){
	if(x==2||x==3||x==5) return 1;
	if(x<2||x%2==0||x%3==0||x%5==0) return 0;
	for(int i=7;i*i<=x;i+=6)
	if(x%i==0) return 0;
	return 1;
}

int main(){
	int n,x,y,cnt,z,i,a[200];
	for(n=0,i=2;i<max;++i)
	if(isPrime(i)) a[n++]=i;
	
	printf("Co %d so nguyen to n (5<n<1000)\n",n-3);
	for(cnt=0,i=3;i<n;++i){
	for(x=0;x<i;++x)
	for(y=x;y<i;++y)
	for(z=i;z>y;--z)
		if(a[i]==a[x]+a[y]+a[z]){
			printf("%3d = %d + %d + %d\n",a[i],a[x],a[y],a[z]);
			cnt++;
			goto checked;
		}
		checked:{}
	}
	printf("Da kiem tra %d snt\n",cnt);
	return 0;
}
