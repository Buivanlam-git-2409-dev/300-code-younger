#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 100

int gcd(int a,int b){
	return (!a)?b:gcd(b%a,a);
}
int main(){
	int n,j,i,a[max],s1,s2;
	srand(time(NULL));
	do{
		printf("Nhap n [1,99]: ");
		scanf("%d",&n);
	}while(n<1||n>max-1);
	for(i=0;i<n;++i)
	printf("%d ",a[i]=rand()%11+10);
	for(s1=s2=i=0;i<n;++i){
		if(i%2&&a[i]%2==0) s1+=a[i];
		if(i%2==0&&a[i]%2) s2+=a[i]; 
	}
	putchar('\n');
	char *kq;
	s1==s2?kq="bang":kq="khac";
	printf("Tong le vi tri chan (%d) %s tong vi tri le (%d)",s1,kq,s2);
	printf("\nCac cap nguyen to cung nhau:\n");
	// xoa cac phan tu bi trung lap da
	for(i=0;i<n;++i)
	for(j=i+1;j<n;++j)
	if(a[j]==a[i]) a[j--]=a[--n];
	
	for(i=0;i<n;++i)
	for(j=i+1;j<n;++j)
	if(gcd(a[i],a[j])==1)
	printf("%2d,%2d\n",a[i],a[j]);
	return 0;
}
