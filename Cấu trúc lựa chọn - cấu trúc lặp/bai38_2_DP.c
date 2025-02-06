#include<stdio.h>

int main(){
	int target = 200;
	int coins[]={1,2,5,10,20,50,100,200};
	int ways[201]={1,0};
	int i,j;
	for(i=0;i<8;++i)
	for(j=coins[i];j<=target;++j)
	ways[j]+=ways[j-coins[i]];
	printf("%d\n",ways[target]);
	return 0;
}
