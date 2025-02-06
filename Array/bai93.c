#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 3
typedef struct{
	int arr[MAX][MAX];
}arr_inside;

arr_inside mulMatrix(int a[][MAX],int b[][MAX]){
	arr_inside temp = {{{0}}};
	int i,j,k;
	for(i=0;i<MAX;++i)
	for(j=0;j<MAX;++j)
	for(k=0;k<MAX;++k)
		temp.arr[i][j]=a[i][k]*b[k][j];
	return temp;
}
int main(){
	int a[MAX][MAX],n,k,i,j;
	arr_inside c;
	srand(time(NULL));
	for(i=0;i<MAX;++i,putchar('\n'))
	for(j=0;j<MAX;++j)
		printf("%5d",a[i][j]=c.arr[i][j]=rand()%10);
	do{
		printf("Nhap luy thua (k>1): ");
		scanf("%d",&k);
	}while(k<2);
	for(i=2;i<=k;++i)
		c=mulMatrix(a,c.arr);
	for(i=0;i<MAX;++i,putchar('\n'))
	for(j=0;j<MAX;++j)
		printf("%5d",c.arr[i][j]);
		
	// tinh so fibonacci bang ma tran luy thua
	int matrix_fib[2][2]={1,1,1,0};
	arr_inside rel_fib = {{1,1,1,0}};
	printf("Nhap n (0<n<40):");
	scanf("%d",&n);
	
	printf("Fibonacci(1) = %d\n",c.arr[0][1]);
	for(i=2;i<=n;++i){
		rel_fib = mulMatrix(matrix_fib,rel_fib.arr);
		printf("Fibonacci (%d) = %d\n",i,rel_fib.arr[0][1]);
	}
	return 0;
}
