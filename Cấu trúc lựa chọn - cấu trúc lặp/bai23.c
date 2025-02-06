#include<stdio.h>
#define max 1e10

int main(){
    unsigned n,i,j,s;
    printf("Nhap n:");
    scanf("%u",&n);
    printf("Cac so hoan hao nho hon %u: ",n);
    for(i=1;i<n;++i){
    for(s=0,j=1;j<=i/2;++j)
        if(i%j==0) s+=j;
        if(s==i) printf("%u ",i);
    }
    putchar('\n');
    return 0;
}