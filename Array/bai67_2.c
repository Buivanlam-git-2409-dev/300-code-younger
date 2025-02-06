#include<stdio.h>
#include<stdlib.h>

int* SortAscIndex(int* a,int n){
	int *p=malloc(n*sizeof(int));
	int t,i,minpos,j;
	for(i=0;i<n;++i) p[i]=i;
	
	for(i=0;i<n-1;++i)
	for(minpos=i,j=i+1;j<n;++j){
		if(a[p[j]]<a[p[minpos]]) minpos=j;
		t=p[i];p[i]=p[minpos];p[minpos]=t;
	}
	return p;
}

int main(){
	int a[]={8,3,6,7,2,5,7,1,4,1};
	int *p;
	int i,n=sizeof(a)/sizeof(*a);
	printf("Mang ban dau: ");
	for(i=0;i<n;++i) printf("%d ",a[i]);
	putchar('\n');
	p=SortAscIndex(a,n);
	printf("Sap xep tang: ");
	for(i=0;i<n;i++) printf("%d ",a[p[i]]);
	putchar('\n');
	printf("Mang sau xy ly: ");
	for(i=0;i<n;++i) printf("%d ",a[i]);
	putchar('\n');
	free(p);
	return 0;
}
