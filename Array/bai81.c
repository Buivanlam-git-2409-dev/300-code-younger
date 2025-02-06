#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define swap(a,b){int t=a;a=b;b=t;}
int* myAlloc(int n){
	return (int*)calloc(n,sizeof(int));
}
// ham khoi tao ham ngau nhien
int* initArr(int n){
	int i;
	int* a=myAlloc(n);
	for(i=0;i<n;++i)
	printf("%d ",a[i]=rand()%201-100);
	putchar('\n');
	return a;
}
void printArr(int *a,int n){
	int i;
	for(i=0;i<n;++i) printf("%d ",a[i]);
	putchar('\n');
}
int* sort(int *a,int n){
	int i,j;
	for(i=0;i<n-1;++i)
	for(j=i+1;j<n;++j)
	if(a[i]>a[j]) swap(a[i],a[j]);
	return a;
}
int* mergeArrDesc(int *a,int *b,int n,int m){
	int i,j,k;
	a[n]=b[m]=101;
	i=j=k=0;
	int* c=myAlloc(n+m);
	if(c){
		while(k<=n+m-1)
		c[k++]=(a[i]>b[j])?a[i++]:b[j++];
	}
	return c;
}
int main(){
	int *a,*b,n,m;
	srand(time(NULL));
	do{
		printf("Nhap so phan tu mang A va B (n,m>0):");
		scanf("%d%d",&n,&m);
	}while(n<1||m<1);
	a=myAlloc(n);
	b=myAlloc(m);
	if(!a||!b) printf("Loi cap phat\n");
	else{
		a=initArr(n);
		b=initArr(m);
		printf("Mang A sap tang: ");printArr(a,n);
		printf("Mang B sap tang: ");printArr(b,m);
		printf("Trong A va B thanh C sap giam:\n");
		int *c=mergeArrDesc(a,b,n,m);
		if(!c) printf("loi cap phat\n");
		else{
			printArr(c,n+m);free(c);
		}
	}
	if(a) free(a);
	if(b) free(b);
	return 0;
}
