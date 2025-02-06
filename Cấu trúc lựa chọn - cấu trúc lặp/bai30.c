#include<stdio.h>

int main(){
	double rate,balance;
	unsigned year,period,n;
	
	do{
		printf("Nhap lai suat, tien von, thoi han: ");
		n=scanf("%lf,%lf,%u",&rate,&balance,&period);
		while(getchar()!='\n'){}
	}while(n!=3||n==EOF&&printf("Nhap thieu hoac nhap loi\n"));
	printf("Lai suat: %g%%\n",rate*100);
	printf("Von ban dau: %g\n",balance);
	printf("Thoi han: %u nam\n",period);
	printf("%3s%10s\n","Nam","Von");
	for(year=1;year<=period;++year){
		balance*=1+rate;
		printf("%3u%10g\n",year,balance);
	}
	return 0;
}
