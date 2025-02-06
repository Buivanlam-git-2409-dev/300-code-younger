#include<stdio.h>

int main(){
	unsigned n,i,k;
	char c;
	do{
		printf("Nhap n: ");
		scanf("%u",&n);
		k=0;
		while(1){
			printf("%4u ",n);
			if(n==1&&k>1&&++k) break;
			if(n%2) n=3*n+1;
			else n/=2;
			k++;
			if(k%6==0) putchar('\n');
		}
		printf("\nHailstones sinh duoc: %u\n",k);
		while(getchar()!='\n'){	}

		printf("Tiep (y/n)?");scanf("%1[^\n]c",&c);
		while(getchar()!='\n'){}
	}while(c!='n');
	return 0;
}
