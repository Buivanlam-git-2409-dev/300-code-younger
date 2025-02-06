#include<stdio.h>
#include<math.h>

int main(){
	int n,m,s;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(!n&&printf("Error: n>0\n"));
	s=0;m=1;
	while(s+m<=n){
		printf("%u",m);
		s+=m++;
		if(s+m<=n) printf(" + ");
	}
	if(s){
		if(s+m<n) printf(" = %d < %d\n",s,n);
		else  printf(" = %d\n",s);
		printf("m = %d\n",m-1);
	}else{
		printf("Khong tim thay\n");
	}
	return 0;
}
