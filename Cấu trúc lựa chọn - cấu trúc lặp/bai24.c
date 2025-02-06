#include<stdio.h>

int main(){
	unsigned long n,t,re;
	printf("Nhap n:");scanf("%lu",&n);
	unsigned cnt,s;
	t=n;cnt=s=0;
	re=n%10;
	do{
		s+=%10;
		cnt++;
		re=re*10+t%10;
	}while(t/=10);
	printf("%u co %u chu so\n",n,cnt);
	printf("Chu so cuoi cung la: %u\n",n%10);
	printf("Chu so dau tien la: %u\n",re%10);
	printf("Tong cac chu so la: %u\n",s);
	printf("So dao nguoc la: %lu\n",re);
	return 0;
}
