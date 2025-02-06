#include<stdio.h>
#include<math.h>
int fibonacci(int n){
	int fib,fib1,fib2;
	fib=fib1=fib2=1;
	while(n--){
		fib=fib1+fib2;
		fib1=fib2;
		fib2=fib;
		if(n==2) break;
	}
	return fib;
}

int main(){
	int n=24;
	printf("Fi[%d] = %d\n",n,fibonacci(n));
	return 0;
}
