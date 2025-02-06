#include<stdio.h>
#include<math.h>

int main(){
	double s;
	printf("Nhap dien tich: ");
	scanf("%lf",&s);
	printf("The tich V = %lf\n",(s*sqrt(s))/(6*sqrt(3.141593)));
	return 0;
}
