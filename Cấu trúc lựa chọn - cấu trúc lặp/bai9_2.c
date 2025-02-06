/*bai 9.2: xac dinh thang m thuoc quy nao trong nam (3quy/nam, 4 thang/quy)*/
#include<stdio.h>
int main(){
	int m;
	printf("Nhap thang:");
	scanf("%d",&m);
	printf("Thang %d thuoc quy %d\n",m,(m-1)/4+1);
	return 0;
}
