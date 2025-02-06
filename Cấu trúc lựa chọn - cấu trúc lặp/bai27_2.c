#include<stdio.h>
#define ll long long

int main(){
	ll n=600851475143;
	ll i=2;
	while(n>1){
		while(n%i) i++;
		n/=i;
	}
	printf("Max: %ld\n",i);
	return 0;
}
