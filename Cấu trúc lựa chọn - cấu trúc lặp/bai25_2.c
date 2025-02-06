#include<stdio.h>

int lcm(int a,int b){
	int lcm_=a;
	while(lcm_%a||lcm_%b) lcm_++;
	return lcm_;
}
int main(){
	int i,k;
	for(k=2520,i=11;i<=20;++i)
	k=lcm(k,i);
	printf("%d\n",k);
	return 0;
}
