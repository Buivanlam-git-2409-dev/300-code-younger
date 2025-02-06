#include<stdio.h>
#define MAX 100
#include<string.h>
int isSymmetrical(int a[],int n){
	int i;
	for(i=0;i<n/2;++i)
	if(a[i]!=a[n-i-1]) return 0;
	return 1;
}
void lshiftkstep(int a[],int n,int k){
	int i;
	k%=n;
	for(i=0;i<k;++i){
		int t=a[0];
		memmove(a,a+1,(n-1)*sizeof(*a));
		a[n-1]=t;
	}
}
int main(){
	int a[MAX],i,k,n;
	do{
		printf("Nhap n [1,99]:");
		scanf("%d",&n);
	}while(n<1||n>99);
	printf("Nhap %d phan tu:\n",n);
	for(i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
	 	scanf("%d ",&a[i]);
	}
	putchar('\n');
	printf(isSymmetrical(a,n)?"Doi xung":"Khong doi xung");
	while(getchar()=='\n'){	}
	printf("\nNhap so can dich: ");
	scanf("%d",&k);
	lshiftkstep(a,n,k);
	
	for(i=0;i<n;++i) printf("%d ",a[i]);
	return 0;
}
