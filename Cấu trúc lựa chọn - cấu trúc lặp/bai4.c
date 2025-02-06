#include<stdio.h>
#include<math.h>
#define eps 1e-10
int main(){
	double a,b,c;
	printf("Nhap 3 canh tam giac:");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a*b*c>0&&a+b>c&&a+c>b&&b+c>a){
		unsigned f=0;
		if(a==b||b==c||c==a) f++;
		if(a==b&&b==c) f++;
		if(fabs(a*a+b*b-c*c)<eps||fabs(a*a+c*c-b*b)<eps||fabs(b*b+c*c-a*a<eps))f+=3;
		switch(f){
			case 0: printf( "Tam giac thuong\n" ); break; 
	      	case 1: printf( "Tam giac can\n" ); break; 
	      	case 2: printf( "Tam giac deu\n" ); break; 
	      	case 3: printf( "Tam giac vuong\n" ); break; 
	      	case 4: printf( "Tam giac vuong can\n" ); break;
		}
		double p = (a+b+c)/2;
		printf("Dien tich S = %g\n",sqrt(p*(p-a)*(p-b)*(p-c)));
	}else printf("Khong hop le\n");
	return 0;
}
