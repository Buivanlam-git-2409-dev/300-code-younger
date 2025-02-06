#include<stdio.h>

int main(){
	unsigned h;
	printf("Nhap so gio: ");
	scanf("%u",&h);
	printf("%u tuan,%u ngay,%u gio\n",h/24/7,(h%(24*7))/24,(h%(24*7))%24);
	unsigned w,d;
	w=h/24/7;
	d=h/24%7;
	h-=w*24*7+d*24;
	printf("%u tuan, %u ngay, %u gio",w,d,h);
	return 0;
}
