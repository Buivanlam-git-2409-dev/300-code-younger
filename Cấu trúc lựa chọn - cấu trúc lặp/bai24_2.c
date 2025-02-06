/*bai tap: nhap vao mot so tu nhien n, cho biet n co bao nhieu chu so, tim 2 so dau tien va 2 so cuoi cung cua n*/
#include<stdio.h>
#include<math.h>

int main(){
	unsigned long n,t;
	unsigned cnt;
	printf("Nhap n: ");
	scanf("%lu",&n);
	t=n;cnt=0;
	do cnt++; while(t/=10);
	printf("%lu co %u chu so: [%lu]..[%lu]\n",n,cnt,n/(unsigned)pow(10,cnt-2),n%100);
	return 0;
}
