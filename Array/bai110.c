// bai 110
// author: bvl

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// ham cap phat
int** myAlloc(int n,int m){
	int i,j;
	// cap phat mang 2D
	int** t = (int**)calloc(n,sizeof(int*));
	if(!t) return t;
	// cap phat cot
	t[0]=(int*)calloc(n*m,sizeof(int));
	if(!t[0]) return t;
	srand(time(NULL));
	for(i=0;i<n;++i){
		 // cap phat tung dong
		t[i]=t[0]+i*m;
		for(j=0;j<m;++j) t[i][j]=rand()%21-10;
	}
	return t;
}
// ham giai phong bo nho
void myFree(int** a,int n){
	free(a[0]);
	free(a);
}
int sumNeg(int *a,int n){
	int i,s;
	for(s=i=0;i<n;++i)
		if(a[i]<0) s++;
	return s;
}

int main(){
	int **a;
	int n,m,i,j,k;
	printf("Nhap n,m: ");
	scanf("%d%d",&n,&m);
	a=myAlloc(n,m);
	if(!a){
		printf("Loi cap phat\n");
		return 1;
	}
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<m;++j)
	printf("%5d",a[i][j]);
	do{
		printf("Nhap k: ");
		scanf("%d",&k);
	}while(k<0||k>n);
	printf("Dong %d co %d so am\n",k,sumNeg(a[k],m));
	myFree(a,n);
	return 0;
}
