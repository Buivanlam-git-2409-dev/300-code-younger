#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#define MAX 100
#include<math.h>
// cap phat dong
int* myAlloc(int n){
	return (int*)calloc(n,sizeof(int));
}
// in mang
void printArr(int*a,int n){
	int i;
	for(i=0;i<n;++i) printf("%d ",a[i]);
	putchar('\n');
}
// tim tri gan x nhat
int nearX(int *a,int n,int x){
	
	int i,pos;
	int min=201;
	for(i=0;i<n;++i)
	if(abs(a[i]-x)<min){
		min = abs(a[i]-x);
		pos = i;
	}
	return pos;
}
// chen 1 vao ben phai phan tu co gia tri am
int insertRNeg(int **a,int *n){
	int i,c,*p;
	// dem gia tri < 0 
	for(c=i=0;i<*n;++i)
		c+=( (*a)[i]<0);
	if(c){
		p = (int*)realloc(*a,(*n+c)*sizeof(int));
		if(!p) return 1;
		*a = p;
		int k = *n+c-1;
		for(i = *n-1;i>=0;--i){
			if((*a)[i]<0) (*a)[k--]=1;
			(*a)[k--]=(*a)[i];
		}
		*n+=c;
	}
	return 0;
}
int main(){
	int n,i,*a,x;
	srand(time(NULL));
	do{
		printf("Nhap n(n>0): ");
		scanf("%d",&n);
	}while(n<1);
	
	a = myAlloc(n);
	if(!a){
		printf("Error! Allocate for problem!\n");
		return 1;
	}
	for(i=0;i<n;++i) printf("%d ",a[i]=rand()%201-100);
	printf("\nNhap x:");
	scanf("%d",&x);
	if(x>101||x<-101) goto next;
	printf("So gan x nhat: %d\n",a[nearX(a,n,x)]);
	next:{}
	if(insertRNeg(&a,&n)){
		printf("Error!"); return 2;
	}
	printArr(a,n);
	free(a);
	return 0;
}
