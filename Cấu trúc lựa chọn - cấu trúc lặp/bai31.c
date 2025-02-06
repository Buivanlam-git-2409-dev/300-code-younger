#include<stdio.h>
int main(){
	unsigned i,j;
	printf("Bang cuu chuong\n");
	for(i=1;i<=10;++i){
		for(j=2;j<=9;++j)
		printf("%c%2ux%2u=%2u",179,j,i,i*j);
		printf("%c\n",179);
	}
	return 0;
}
