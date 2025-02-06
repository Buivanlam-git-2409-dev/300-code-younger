#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#define max 200

// ham tron cac phan tu
void shuffle(int a[],int n){
	int t[max],i;
	for(i=0;i<n/2;++i){
		t[2*i]=a[i];
		t[2*i+1]=a[n/2+i];
	}
	memmove(a,t,(n-1)*sizeof(*a));
}

// ham so sanh khi hai mang da tro ve vi tri ban dau
int isEqual(int a[],int b[],int n){
	int i;
	for(i=0;i<n;++i)
	if(a[i]!=b[i]) return 0;
	return 1;
}

void output(int a[],int n){
	int i;
	for(i=0;i<n;++i)
	printf("%d ",a[i]);
	putchar('\n');
}
int main(){
	int a[max],b[max];
	int n,i,count;
	srand(time(NULL));
	do{
		printf("Nhap n (n chan): ");
		scanf("%d",&n);
	}while(n<2||n%2);
	for(i=0;i<n;++i)
	printf("%d ",a[i]=b[i]=rand()%201-100);
	putchar('\n');
	
	shuffle(a,n);
	output(a,n);
	shuffle(b,n);
	count=0;
	do{
		shuffle(b,n);
		count++;
	}while(!isEqual(a,b,n));
	printf("\nCan %d lan shuffle de mang tro ve ban dau\n",count);
	return 0;
	
}
