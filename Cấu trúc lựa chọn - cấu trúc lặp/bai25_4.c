#include<stdio.h>
#include<math.h>

int main(){
	double n,fractpart,intpart;
	n=123.456;
	fractpart=modf(n,&intpart);
	printf("Phan nguyen: %lf\n",intpart);
	printf("Phan thap phan: %lf\n",fractpart);
	return 0;
}
