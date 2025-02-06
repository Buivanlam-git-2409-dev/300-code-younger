#include<stdio.h>
int main(){
	unsigned d,m,y,top,dow;
	printf("Nhap ngay,thang,nam: ");
	scanf("%u%u%u",&d,&m,&y);
	if(y<1582){
		printf("Lich Gregorian bat dau tu nam 1582\n");
		return 1;
	}
	if(m<1||m>12){
		printf("Thang khong hop le\n");
		return 2;
	}
	switch(m){
		case 4: case 6: case 9: case 11: top=30;break;
		case 2: top = 28+((y%4==0&&y%100)||y%400==0); break;
		default: top=31;
	}
	if(d<1||d>top){
		printf("Ngay khong hop le\n");
		return 3;
	}
	printf("Hop le\n");
	y-=(14-m)/12;
	m+=12*((14-m)/12)-2;
	dow=(d+y+y/4-y/100+y/400+(31*m)/12)%7;
	if(!dow) printf("Chu nhat\n");
	else printf("Thu %u\n",dow+1);
	return 0;
}
