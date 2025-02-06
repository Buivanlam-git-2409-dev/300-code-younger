#include<stdio.h>
#include<math.h>
float F(float x,int n){
	if(n>256) return x;
	return x+n/F(x,n*2);
}
int main(){
	float f,x;
	printf("Nhap vao x: ");
	scanf("%f",&x);
	f=x;
	for(int i=256;i>=1;i/=2)
	f=x+i/f;
	printf("F = %f\n",F(x,1));
	return 0;
}
