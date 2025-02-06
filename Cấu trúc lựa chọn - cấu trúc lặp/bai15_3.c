#include<stdio.h>
int main(){
	int d=1,m=1,y=1900,c=0;
	while(y<2001){
		switch(m){
			case 4: case 6: case 9: case 11: d+=30;break;
			case 2: d+=28+((y%4==0&&y%100)||y%400==0); break;
			default: d+=31;
		}
		if(d%7==0&&y>1900) c++;
		m=(m+1)%12;
		if(m==1) y++;
	}
	printf("%d\n",c);
	return 0;
}
