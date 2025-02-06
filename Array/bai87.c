#include<stdio.h>
#include<math.h>
#define MAX 20
void createArr(int a[MAX][MAX],int n){
	int i,j;
	for(i=0;i<n;++i)
	for(j=0;j<n;++j){
		printf("a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
	}
}
void printArr(int a[MAX][MAX],int n){
	int i,j;
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j)
		printf("%3d ",a[i][j]);
	putchar('\n');
}
int Trace(int a[MAX][MAX],int n){
	int i,j,s;
	for(s=i=0;i<n;++i)
		s+=a[i][i];
	return s;
}
int triMatrix(int a[][MAX],int n){
	int i,j;
	for(i=0;i<n;++i)
	for(j=0;j<i;++j)
		if(a[i][j]) return 0;
	return 1;
}
int DetA(int a[MAX][MAX],int n){
	int i,j,k,mul=1;
	for(i=0;i<n;++i)
		if(triMatrix(a,n))
		mul*=a[i][i];
	return mul;
}
int main(){
	int a[MAX][MAX],n,trace,deta;
	do{
		printf("Nhap bac ma tran: ");
		scanf("%d",&n);
	}while(n<1||n>MAX-1);
	createArr(a,n);
	printArr(a,n);
	printf("Trace = %d\n",Trace(a,n));
	printf("det(A) = %d\n",DetA(a,n));
	return 0;
}
