#include<stdio.h>
#include<stdlib.h>
#define MAX 1229
short* sieve;
int* primes;

int test(int n,int limit){
	int i,t,c;
	i=t=c=0;
	while(n>1){
		while(n%primes[i]&&i<MAX) ++i;
		n/=primes[i];
		if(primes[i]>t) c++;
		if(c>limit) return 0;
		// dem so lan lap lai cua snt do
		t=primes[i];
	}
	return c==limit;
}
int check(int n,int limit){
	for(int i=0;i<limit;++i)
	if(test(n+i,limit)==0) return 0;
	return 1;
}
int main(){
	int i,j,size;
	
	sieve = new short(1e4);
	primes = new int(MAX);
	for(size=0,i=2;i<1e4;++i)
	if(!sieve[i]){
		primes[size++]=i;
		for(j=i+i;j<1e4;j+=i) sieve[j]=1;
	}
	i=2;
	while(!check(i++,4)) {}
	printf("%d\n",i);
	return 0;
}
