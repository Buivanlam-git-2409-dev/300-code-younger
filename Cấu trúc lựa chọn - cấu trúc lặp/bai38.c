#include<stdio.h>

int main(){
	unsigned x,y,z,x1,y1,z1,min,n;
	printf("Nhap n (nghin dong,n>5): ");
	scanf("%u",&n);
	
	x=y=z=x1=y1=z1=0;
	min=n;
	for(y=n/2;y>0;--y)
	for(z=0;z<n/5;++z){
		x=(n-2*y-5*z);
		if((y>x+z)&&(x+y+z<min)){
			min=x+y+z;
			x1=x;y1=y;z1=z;
		}
	}
	printf("( %u, %u, %u): %u\n",x1,y1,z1,min);
	return 0;
}
