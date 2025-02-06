#include<stdio.h>
#include<math.h>
#define swap(a,b) {a+=b;b=a-b;a-=b;}
#define eps 1e-10
int main(){
	double a,b,c;
	printf("Nhap 3 canh tam giac:");
	scanf("%lf%lf%lf",&a,&b,&c);
	// sx
	if(a>b) swap(a,b);
	if(a>c) swap(a,c);
	if(b>c) swap(b,c);
	if(a>0&&a+b>c){
		if(a==c) printf("tam giac deu\n");
		else if(fabs(c+a)*(c-a)-b*b<eps)
		if(a==b||b==c) printf("Tam giac vuong can\n");
		else printf("Tam giac vuong\n");
		else
		if(a==b||b==c) printf("Tam giac can\n");
		else printf("Tam giac thuong\n");
		
		double p = (a+b+c)/2;
		printf("Dien tich S = %g\n",sqrt(p*(p-a)*(p-b)*(p-c)));
		
	}else printf("Khong hop le\n");
	return 0;
}
