#include<stdio.h>
#include<math.h>
#define UP 5
#define MAX (UP*UP)

int main(){
	double numbers[MAX];
	int i,j,cnt,elements=0;
	
	for(i=2;i<=UP;++i)
	for(j=2;j<=UP;++j){
		numbers[elements++]=pow(i,j);
	}
	
	for(cnt=i=0;i<elements;++i){
		for(j=0;j<i;++j)
		if(numbers[i]==numbers[j]) break;
		if(i==j) cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}
