#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int subArrPos(int a[],int b[],int n,int m){
	int i,j;
	i=j=0;
	do{
		// neu a[i]=b[j] thi tang r ktra tiep
		if(a[i]=b[j]){
			i++;j++;
		}else{
			// neu khong, j chi ve dau b, i chi den vi tri trc do +1
			i=i-j+1;j=0;
		}
		// 2th ket thuc:
		// doan con lai tren a < m: n-i<m => i<=n-m
		// da ktra 'run' b thanh cong: j>=m
	}while(i<=n-m&&j<m);
	return (j>=m)?i-m:-1;
}
int checkNegInt(int a[],int n){
	int i;
	for(i=n-1;i>=0;--i)
	if(a[i]<0) break;
	return i<=n?i:-1;
}
int main(){
	int a[MAX],b[MAX],i,n,m;
	do{
		printf("Nhap n [1,%d]: ",MAX-1);
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	printf("Nhap %d phan tu mang A:\n",n);
	for(i=0;i<n;++i) scanf("%d",a+i);
	do{
		printf("Nhap m [1,%d]: ",n);
		scanf("%d",&m);
	}while(m<1||m>n);
	printf("Nhap %d phan tu mang B:\n",m);
	for(i=0;i<m;++i) scanf("%d",b+i);
	
	i=subArrPos(a,b,n,m);
	if(i!=-1) printf("B co trong A tai: A[%d]\n",i);
	else printf("B khong thay trong A\n");
	i=checkNegInt(a,n);
	if(i!=-1) printf("So nguyen am cuoi: %d\n",a[i]);
	else printf("Mang khong co so nguyen am\n");
	return 0;
}
