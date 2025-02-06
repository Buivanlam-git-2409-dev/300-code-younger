#include<stdio.h>

float f(float x,float y,int d){
	switch(d){
		case 0: return (float)x+y;
		case 1: return (float)x-y;
		case 2: return (float)x*y;
		case 3: return (float)x/y;
	}
	return 0;
}
int main(){
	unsigned i,j,k,l,m;
	char sign[]={'+','-','*','/'};
	for(i=0;i<4;++i)
	for(j=0;j<4;++j)
	for(k=0;k<4;++k)
	for(l=0;l<4;++l)
	for(m=0;m<4;++m)
	if(f(f(f(f(f(1,2,i),3,j),4,k),5,l),6,m)==36)
	printf( "((((1 %c 2) %c 3) %c 4) %c 5) %c 6 = 36\n", 
               sign[i], sign[j], sign[k], sign[l], sign[m] );
    return 0;
}
