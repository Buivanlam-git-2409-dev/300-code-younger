#include<stdio.h>
int main(){
	unsigned h,m,s;
	long time;
	printf("Nhap gio,phut,giay[1]:");
	scanf("%u%u%u",&h,&m,&s);
	time=3600*h+60*m+s;
	printf("Nhap gio,phut,giay[2]:");
	scanf("%u%u%u",&h,&m,&s);
	time-=3600*h+60*m+s;
	if(time<0) time=-time;
	printf("Hieu thoi gian: %u gio,%u phut,%u giay\n",time/3600,(time%3600)/60,(time%3600)%60);
	return 0;
}
