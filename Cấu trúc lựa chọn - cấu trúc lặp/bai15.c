#include<stdio.h>
#include<time.h>
int days_diff(unsigned d,unsigned m,unsigned y){
	time_t first,now;
	struct tm date={0};
	date.tm_year-y-1900;
	date.tm_mon=m-1;
	date.tm_mday=d;
	now=mktime(&date);
	date.tm_mon=0;
	date.tm_mday=1;
	first=mktime(&date);
	return (int)difftime(now,first)/(24*60*60);
}
int main(){
	unsigned d,m,y,s,i;
	printf("Nhap ngay,thang,nam:");
	scanf("%u%u%u",&d,&m,&y);
	s=d;
	for(i=1;i<m;++i)
	switch(i){
		case 4: case 6: case 9: case 11: s+=30;break;
		case 2: s+=28+((y%4==0&&y%100)||y%400==0);break;
		default: s+=31;
	}
	printf("Ngay thu: %d\n",days_diff(d,m,y)+1);
	printf("Ngay thu: %u\n",s);
	return 0;
}
