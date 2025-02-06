#include<stdio.h>
#include<math.h>

int main(){
	double s;
	int n,i;
	printf("Nhap n: ");
	scanf("%d",&n);
	s=1.0;
	for(i=2;i<=n;i++)
	s=pow(i+s,1.0/(i+1));
	printf("Ket qua: %lf\n",s);
	return 0;
}
