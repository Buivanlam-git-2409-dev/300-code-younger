#include<stdio.h>
#include<math.h>

int main(){
	unsigned a,b,c;
	for(a=1;a<100/5;++a)
	for(b=1;b<100/3;++b){
		c=100-a-b;
		if(300==15*a+9*b+c)
		printf("(%2u,%2u,%2u)\n",a,b,c);
	}
	return 0;
}
