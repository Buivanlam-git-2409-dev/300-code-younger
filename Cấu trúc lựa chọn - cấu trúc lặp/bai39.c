#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	
	for(a=1;a<100;++a)
	for(b=1;b<100;++b)
	for(c=1;c<100;++c)
		if(c*c==b*b+a*a){
		if(b-a==1&&c-b==1)
		printf("(%u, %u, %u): ba so nguyen lien tiep\n",a,b,c);
		if(b%2==0&&b-a==2&&c-b==2)
		printf("(%u, %u, %u): ba so chan lien tiep\n",a,b,c);
	}
	return 0;
}
