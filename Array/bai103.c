// bai 103
// author: bui van lam
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 20

int main(){
	int a[MAX][MAX],n,i,j,k;
	int sumd1[2*MAX],sumd2[2*MAX];
	
	printf("Nhap bac ma tran: ");scanf("%d",&n);
	srand(time(NULL));
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j) printf("%5d",a[i][j]=rand()%21-10);
	// c1
	for(k=-n+1;k<n;++k){
		int s1,s2;
		s1=s2=0;
		for(i=0;i<n;++i) for(j=0;j<n;++j){
			// cheo chinh
			if(j==i+k) s1+=a[i][j];
			if(j==n-i-1+k) s2+=a[i][j];
		}
		sumd1[k+n-1]=s1;
		sumd2[k+n-1]=s2;	
	}
	printf("Ma tran B c1:\n");
	for(i=0;i<n;++i,putchar('\n'))for(j=0;j<n;++j){
		printf("%5d",sumd1[j-i+n-1]+sumd2[j+i]-a[i][j]);
	}
	// c2
	int l,s;
	printf("\nMa tran B c2:\n");
	for(k=0;k<n;++k,putchar('\n'))
	for(l=0;l<n;++l){
		for(s=i=0;i<n;++i)
		for(j=0;j<n;++j)
		if(abs(i-k)==abs(j-l)) s+=a[i][j];
		printf("%5d",s);
	}
	return 0;
}
