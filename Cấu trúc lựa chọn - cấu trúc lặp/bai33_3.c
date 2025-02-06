#include<stdio.h>
#include<math.h>

double isTrue(int x){
	int t=x;
	double s=0;
	do{
		s+=pow(t%10,5);
	}while(t/=10);
	return s==x;
}
int main(){
	int i,s;
	for(i=2;i<354294;++i)
	if(isTrue(i)) s+=i;
	printf("%d\n",s);
	return 0;
}
