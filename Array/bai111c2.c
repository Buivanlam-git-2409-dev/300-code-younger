// bai 111 c2
// author: bvl

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAX 20
void rShiftkStep(int a[][MAX],int b[],int n,int m,int k){
	int i,j,t;
	int size=n*m;
	for(i=0;i<k;++i){
		t = a[b[n*m-1]/size][b[n*m-1]%size];
		for(j=n*m-1;j>0;j--)
		a[b[j]/size][b[j]%size] = a[b[j-1]/size][b[j-1]%size];
		a[0][0]=t;
	}
}

// luu luon theo mang 2 chieu
void createIndex(int b[],int a[][MAX],int n,int m){
	int i,j,v,direction,k;
	int size=n*m;
	v=direction=0;i=j=0;
	do{
		switch(direction){
			case 0:
				for(k=0;k<m;++k) b[v++]=i*size+(j+k);
				j+=m-1; break;
			case 1:
				for(k=1;k<n;++k) b[v++]=(i+k)*size+j;
				i+=n-1; break;
			case 2:
				for(k=1;k<m;++k) b[v++]=i*size+(j-k);
				j-=m-1; break;
			case 3:
				for(k=1;k<n-1;++k) b[v++]=(i-k)*size+j;
				i-=n-2; n-=2; m-=2; j++;
		}
		direction = (direction+1)%4;
	}while(v<size);
}

int main(){
	int a[MAX][MAX];
	int b[MAX*MAX];
	int n,m,i,j,k;
	printf("Nhap dong,cot:");
	scanf("%d%d",&n,&m);
	srand(time(NULL));
	for(i=0;i<n;++i,putchar(\n))
	for(j=0;j<m;++j)
		printf("%5d",a[i][j]=rand()%21-10);
	createIndex(b,a,n,m);
	printf("Nhap buoc dich:");
	scanf("%d",&k);
	if(k>n*m) k=0;
	rShiftkStep(a,b,n,m,k);
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<m;++j)
	printf("%5d",a[i][j]);
	return 0;
}
