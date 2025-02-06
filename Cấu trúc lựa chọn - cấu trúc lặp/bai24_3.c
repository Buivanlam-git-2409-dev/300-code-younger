#include<stdio.h>
#define ull unsigned long long
#define FOR(i,a,b){i=a;i<=b;++i}

int main(){
	ull rel = 0;
	ull modulo=1e10;
	for(ull i=1;i<=1000;++i){
		ull tmp = i;
		for(ull j=1;j<i;++j){
			tmp*=i;
			tmp%=modulo;
		}
		rel+=tmp;
		rel%=modulo;
	}
	printf("%llu\n",rel);
}
