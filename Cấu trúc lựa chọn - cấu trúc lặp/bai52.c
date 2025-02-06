#include<stdio.h>
#include<math.h>

int main(){
	float n,s,i;
	printf("Nhap n: ");
	scanf("%f",&n);
	for(s=0,i=1;i<=n;++i)
	s+=1/(n*n+i);
	printf("Fn = %f\n",s);
	return 0;
}
