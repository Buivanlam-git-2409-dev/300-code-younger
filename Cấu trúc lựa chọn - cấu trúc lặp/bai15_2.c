#include<stdio.h>
int main(){
	int d,m,top;
	do{
		printf("Nhap so thu tu ngay: ");
		scanf("%d",&d);
	}while((d<1||d>365)&&printf("Tri khong hop le\n"));
	for(m=1;;++m,d-=top){
		switch(m){
			case 4: case 6: case 9: case 11: top=30;break;
			case 2: top = 28;break;
			default: top=31;
		}
		if(d<=top) break;
	}
	printf("%d - %d\n",d,m);
	return 0;
}
