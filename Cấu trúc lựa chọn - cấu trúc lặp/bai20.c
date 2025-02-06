#include<stdio.h>
unsigned long money_(unsigned kw){
	unsigned m;
	if(kw<=100) m=kw*500;
	else if(kw<=250) m=500*100+800*(kw-100);
	else if(kw<=350) m=500*100+800*(250-100)+1000*(kw-250);
	else m=500*100+800*(250-100)+1000*(350-250)+1500*(kw-350);
	return m;
}
int main(){
	unsigned kw;
	unsigned long money;
	printf("Nhap so kW tieu thu: ");
	scanf("%u",&kw);
	printf("chi phi: %lu\n",money_(kw));
	// tinh theo gia san, tieu thu tinh sau
	money=kw*500;
	// tu kw 100 tro di, them phu (800-500) cho moi kw tang them
	if(kw>100) money+=(kw-100)*300;
	// tu kw 250 tro di, them phu (1000-800)
	if(kw>250) money+=(kw-250)*200;
	// tu k2 350 tro di, them phu phi (1500-1000)
	if(kw>350) money+=(kw-350)*500;
	printf("Chi phi: %lu\n",money);
	return 0;
}
