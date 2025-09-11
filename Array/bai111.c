// bai 111
// author: bvl

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAX 20

void rShiftkStep(int b[],int n,int m,int k){
	int i,j;
	for(i=0;i<k;++i){
		int t=b[n*m-1];
		for(j=n*m-1;j>0;--j)
			b[j]=b[j-1];
		b[0]=t;
	}
}
void two2one(int b[],int a[][MAX],int n,int m){
	int i,j,v,direction,k;
	int size=n*m;
	
	v=direction=0;
	i=j=0;
	do{
		switch(direction){
			case 0:
				for(k=0;k<m;+k) b[v++]=a[i][j+k];
				j+=m-1; break;
			case 1:
				for(k=1;k<n;++k) b[v++]=a[i+k][j];
				i+=n-1;break;
			case 2:
				for(k=1;k<m;++k) b[v++]=a[i][j-k];
				j-=m-1; break;
			case 3:
				for(k=1;k<n-1;++k) b[v++]=a[i-k][j];
				i-=n-2; n-=2; m-=2; j++;
		}
		direction=(direction+1)%4;
	}while(v<size);
}
void one2two(int a[][MAX],int b[],int n,int m){
	int i,j,v,direction,k;
	int size=n*m;
	v=direction=0; i=j=0;
	do{
		switch(direction){
			case 0:
				for(k=0;k<m;++k) a[i][j+k]=b[v++];
				j+=m-1; break;
			case 1:
				for(k=1;k<n;++k) a[i+k][j]=b[v++];
				i+=n-1; break;
			case 2:
				for(k=1;k<m;++k) a[i][j-k]=b[v++];
				j-=m-1; break;
			case 3:
				for(k=1;k<n-1;++k) a[i-k][j]=b[v++];
				i-= n-2; n-=2; m-=2;
				j++;
		}
		direction=(direction+1)%4;
	}while(v<size);
}

int main(){
	int a[MAX][MAX];
	int b[MAX*MAX];
	int n,m,i,j,k;
	printf("Nhap dong, cot:");
	scanf("%d%d",&n,&m);
	srand(time(NULL));
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<m;++j)
		printf("%5d",a[i][j]=rand()%21-10);
	// chuyen mang 2 chieu sang 1 chieu
	two2one(b,a,n,m);
	printf("Nhap buoc dich: ");
	scanf("%d",&k);
	if(k>n*m) k =0;
	rShiftkStep(b,n,m,k);
	one2two(a,b,n,m);
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<m;++j) printf("%5d",a[i][j]);
	return 0;
}
