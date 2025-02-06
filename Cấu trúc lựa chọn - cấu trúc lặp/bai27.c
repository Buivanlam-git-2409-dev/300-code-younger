#include<stdio.h>
#include<math.h>

// giai theo de quy
void PrimeAnalyse(unsigned prime,unsigned n){
	if(prime>(unsigned)(sqrt(n))){
		printf("%u\n",n);
		return;
	}
	if(n%prime==0){
		printf("%u * ",prime);
		PrimeAnalyse(prime,n/prime);
		return;
	}else{
		if(prime==2) PrimeAnalyse(3,n);
		else PrimeAnalyse(prime+2,n);
	}
}
int main(){
	unsigned n,i=2;
	printf("Nhap n: ");
	scanf("%u",&n);
	do{
		while(n%i) i++;
		n/=i;
		printf(n>1?"%u * ":"%u\n",i);
	}while(n>1);
	// c2
	printf("Nhap n:");
	scanf("%u",&n);
	PrimeAnalyse(2,n);
	return 0;
}
