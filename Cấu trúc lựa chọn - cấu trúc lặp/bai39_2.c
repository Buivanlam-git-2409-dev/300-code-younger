#include<stdio.h>
#define max 1000
int pyTriplet(){
	unsigned a,b;
	for(a=1;a<1000;++a)
	for(b=a+1;b<1000;++b)
	if(1000*(a+b)-a*b==500000)
	return a*b*(1000-a-b);
}
int main(){
	printf("%d\n",pyTriplet());
	return 0;
}
