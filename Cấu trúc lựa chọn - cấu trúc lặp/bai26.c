#include<stdio.h>
#include<math.h>
int main(){
	int tu,mau;
	int t,m;
	printf("Nhap tu so, mau so: ");
	scanf("%d%d",&tu,&mau);
	t=abs(tu);
	m=abs(mau);
	while(t!=m) (t>m)?(t-=m):(m-=t);
	tu/=t;
	mau/=t;
	printf("Rut gon: ");
	if(mau<0){
		tu=-tu;
		mau=-mau;
	}
	if(mau==1) printf("%d\n",tu);
	else printf("%d/%d\n",tu,mau);
	return 0;
}
