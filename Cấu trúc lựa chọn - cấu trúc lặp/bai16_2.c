#include<stdio.h>
#include<math.h>

int main(){
	unsigned y,m,d,dow,top,y1,m1,col,i,j;
	char s[]={'S','M','T','W','T','F','S'};
	printf("Thang va nam? ");
	scanf("%u %u",&m,&y);
	y1=y-(14-m)/12;
	m1=m+12*((14-m)/12)-2;
	dow=(1+y1+y1/4-y1/100+y1/400+(31*m1)/12)%7;
	switch(m){
		case 4: case 6: case 9: case 11: top=30;break;
		case 2: top = 28+((y%4==0&&y%100)||y%400==0);break;
		default: top=31;break;
	}
	printf("%u/%u\n",m,y);
	printf("'cal' command:\n");
	for(i=0;i<7;++i) printf("%3c",s[i]);
	putchar('\n');
	for(d=0;d<dow;++d) printf("   ");
	for(d=1;d<=top;++d){
		printf("%3u",d);
		if((dow+d)%7==0) putchar('\n');
	}
	if((dow+top)%7) putchar('\n');
	printf("\n 'ncal' command:\n");
	col=(unsigned) ceil((dow+top)/7.0);
	for(i=0;i<7;++i,putchar('\n'))
	for(d=i+1-dow,j=0;j<=col;++j)
	if(j==0) printf("%3c",s[i]);
	else if(j==1&&i<dow) printf("   ");
	else if((d+=j>1?7:0)<=top) printf("%3u",d);
	else break;
	return 0;
}
