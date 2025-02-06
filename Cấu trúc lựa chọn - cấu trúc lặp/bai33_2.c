#include<stdio.h>
#define p3(x) (x)*(x)*(x)
#define p4(x) (x)*(x)*(x)*(x)

int main(){
	int i,j,k,l,d;
	for(i=1;i<10;++i)
	for(j=0;j<10;++j)
	for(k=0;k<10;++k){
		d=100*i+10*j+k;
		if(p3(i)+p3(j)+p3(k)==d)
		printf("%d ",d);
		for(l=0;l<10;++l)
		if(p4(i)+p4(j)+p4(k)+p4(l)==10*d+l)
		printf("%u ",10*d+l);
	}
	return 0;
}
