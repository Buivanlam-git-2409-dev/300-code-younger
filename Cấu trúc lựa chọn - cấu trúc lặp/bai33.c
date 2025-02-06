#include<stdio.h>
#include<math.h>
int main(){
	int i,j,s;
	printf("So Armstrong co 3,4 chu so:\n");
	for(i=100;i<9999;++i){
		for(s=0,j=i;s<=i&&j>0;j/=10)
		s+=pow(j%10,i<1000?3:4);
		if(i==s) printf("%d ",i );
	}
	return 0;
}
