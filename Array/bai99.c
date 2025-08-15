// bai 99
// author: bui van lam

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// cap phat dong
int** myAlloc(int n,int f){
	int i,j;
	int** t = (int**)calloc(n,sizeof(int*));
	if(!t) return t;
	for(i=0;i<n;++i){
		t[i] = (int*) calloc(n,sizeof(int));
		if(f) for(j=0;j<n;++j) t[i][j]=rand()%21-10;
	}
	return t;
}

void printMatrix(int** a,int n,char* s){
	int i,j;
	printf("%s: \n",s);
	for(i=0;i<n;++i,putchar('\n'))
	for(j=0;j<n;++j) printf("%5d",a[i][j]);
}

int** mulMatrix(int** a,int** b,int n){
	int** t;
	int i,j,k;
	t = myAlloc(n,0);
	if(t==NULL) return t;
	for(i=0;i<n;++i) for(j=0;j<n;++j)
	for(k=0;k<n;++k) t[i][j]+=a[i][k]*b[k][j];
	return t;
}

int** addMatrix(int** a,int** b,int n){
	int** t;
	int i,j;
	t=myAlloc(n,0);
	if(t==NULL) return t;
	for(i=0;i<n;++i)
	for(j=0;j<n;++j) t[i][j]=a[i][j]+b[i][j];
	return t;
}

void myFree(int** a,int n){
	int i;
	for(i=0;i<n;++i) free(a[i]);
	free(a);
}

int main(){
	int **a,**b,**c,**d,n; 
  	srand(time(NULL)); 
  	printf("Nhap bac ma tran: "); 
  	scanf("%d",&n); 
    
  	a = myAlloc(n,1); 
  	b = myAlloc(n,1); 
    
  	if(!a || !b){ 
		printf( "Loi cap phat\n" );
	  	return 1;
	} 
  
  	printMatrix(a,n,"Ma tran A"); 
  	printMatrix(b,n,"Ma tran B"); 

  	c = addMatrix(a,b,n); 
  	if(c) printMatrix(c,n,"Ma tran tong"); 
  	else { printf("Loi cap phat\n"); return 1;} 
  	
 	d = mulMatrix(a,b,n);
  	if(d) printMatrix(d,n,"Ma tran tich");
  	else{ printf("Loi cap phat\n"); return 1;} 
 
  	myFree(a,n); myFree(b,n); 
  	myFree(c,n); myFree(d,n);
 	return 0; 
}
