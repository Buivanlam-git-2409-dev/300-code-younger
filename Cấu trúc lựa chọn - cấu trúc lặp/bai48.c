#include<stdio.h>
#define ispow2(x) (!((x)&((x)-1))&&(x))
// x		1000
//x-1		0111
//x&(x-1)	0000
//!x&(x-1)	1111 && 1000
//!x&(x-1)&&x	1000 => pow 2
int main(){
	unsigned i,n,tmp;
	printf("Nhap n: ");
	scanf("%u",&n);
	for(i=n/2;i>=1;--i)
	if(n%i==0&&i&1) break;
	printf("US le lon nhat: %u\n",i);
	// cau b
	for(tmp=i=1;i<=n/2;i*=2) if(n%i==0) tmp=i;
	for(i=n/2;i>=1;--i)
	if(n%i==0&&ispow2(i)) break;
	printf("US lon nhat la luy thua cua 2: %u\n",tmp);
	printf("US lon nhat la luy thua cua 2: %u\n",i);
	return 0;
}
