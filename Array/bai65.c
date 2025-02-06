#include<stdio.h>
#include<stdlib.h>
#define max 100

int main(){
	int n,a[max],i,j,c;
	float s;
	do{
		printf("Nhap n [1,99]:");
		scanf("%d",&n);
	}while(n<1||n>99);
	printf("Nhap %d phan tu:\n",n);
	for(i=0;i<n;++i) scanf("%d",a+i);
	
	for(s=c=i=0;i<n;++i)
	if(a[i]<0&&a[i]&1){
		s+=a[i];c++;
	} 
	printf("\nTrung binh cong nguyen am le = %.2f\n",c?(float)s/c:0);
	for(i=0;i<n-1;++i){
		for(c=j=i+1;j<n;++j)
		if(a[j]!=a[i]) a[c++]=a[j];
		n=c;
	}
	for(i=0;i<c;++i)
	printf("%d ",a[i]);
	return 0;
}
