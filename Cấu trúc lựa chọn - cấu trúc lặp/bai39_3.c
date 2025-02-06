#include<stdio.h>

int main(){
	long p,a,rel=0,max=0;
	for(p=2;p<=1000;p+=2){
		int cnt=0;
		for(a=2;a<p/3;++a)
		if(p*(p-2*a)%(2*(p-a))==0) cnt++;
		if(cnt>max){
			max=cnt;
			rel=p;
		}
	}
	printf("%ld\n",rel);
	return 0;
}
