#include<stdio.h>
#define MAX 1e6

int main(){
	int c_max=0;
	unsigned i,n,n_max=0;
	for(i=MAX;i>0;--i){
		unsigned c=0;
		n=i;
		while(1){
			if(n==1&&c>1&&++c) break;
			if(n%2) n=3*n+1;
			else n/=2;
			c++;
		}
		if(c>c_max){
			c_max=c;
			n_max=i;
		}
	}
	printf("%u\n",n_max);
	return 0;
}
