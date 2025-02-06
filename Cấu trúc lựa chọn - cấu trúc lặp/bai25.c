#include<stdio.h>

unsigned gcd(unsigned a,unsigned b){
	return !a?b:gcd(b%a,a);
}
unsigned lcm(unsigned a,unsigned b){
	return a*b/gcd(a,b);
}
int main(){
	unsigned a,b;
	printf("nhap cap (a,b):");
	scanf("%u%u",&a,&b);
	printf("USCLN (a,b): %u",gcd(a,b));
	printf("\nBSCNN (a,b): %u\n",lcm(a,b));
	// c2
	unsigned gcd2,lcm2;
	gcd2=a;
	while(a%gcd2||b%gcd2) gcd2--;
	lcm2=a;
	while(lcm2%a||lcm2%b) lcm2++;
	printf("USCLN (a,b): %u\n",gcd2);
	printf("BSCNN (a,b): %u\n",lcm2);
	return 0;
}
