#include<stdio.h>
#include<math.h>

double area(double xa,double ya,double xb,double yb,double xc,double yc){
	return 0.5*fabs(xa*yb-xb*ya+xb*yc-xc*yb+xc*ya-xa*yc);
}
int main(){
	double xa,ya,xb,yb,xc,yc,xm,ym;
	double d;
	
	printf("nhap xA,yA xB,yB xC,yC xM,yM ");
	scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&xa,&ya,&xb,&yb,&xc,&yc,&xm,&ym);
	d=area(xm,ym,xa,ya,xb,yb)+area(xm,ym,xa,ya,xc,yc)+
	area(xm,ym,xb,yb,xc,yc)-area(xa,ya,xb,yb,xc,yc);
	if(d>0) printf("M nam ngoai tam giac ABC\n");
	else if(area(xm,ym,xa,ya,xb,yb)==0||area(xm,ym,xa,ya,xc,yc)==0||area(xm,ym,xb,yb,xc,yc)==0)
	printf("M nam tren canh tam giac ABC\n");
	else printf("M nam trong tam giac ABC\n");
	return 0;
}
