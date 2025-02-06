#include<stdio.h>
#include<math.h>
int main(){
	float xa,ya,xb,yb;
	printf("A(xa,ya) va B(xb,yb)\n");
	scanf("%f %f %f %f",&xa,&ya,&xb,&yb);
	printf("|AB| = %g\n",sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya)));
	return 0;
}
