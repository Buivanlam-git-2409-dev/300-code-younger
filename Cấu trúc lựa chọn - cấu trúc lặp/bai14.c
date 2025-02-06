#include<stdio.h>
#include<string.h>

int top(int m,int y){
	switch(m){
		case 4:case 6:case 9:case 11: return 30;
		case 2: return 28+((y%4==0&&y%100)||y%400==0);
		default: return 31;
	}
}
int main(){
	unsigned d,m,y;
	printf("Nhap ngay,thang,nam:");
	scanf("%u%u%u",&d,&m,&y);
	d=(d%top(m,y))+1;
	if(d==1) m=(m%12)+1;
	printf("ngay mai: %02u/%02u/%u\n",d,m,y+(m==1&&d==1));
	printf("Nhap ngay,thang,nam:");
	scanf("%u%u%u",&d,&m,&y);
	if(d==1){
		if(m==1){m=12;y--;}
		else m--;
		d=top(m,y);
	}else d--;
	printf("Hom qua: %02u/%02u/%u\n",d,m,y);
	return 0;
}
