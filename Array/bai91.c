#include<stdio.h>
#include<stdlib.h>
#define _w 12
#define _h 8
#define _x 4
#define _y 3

int p[4][6]={{0,1,0,1,0,0},
			 {1,0,0,0,1,0},
			 {1,0,0,0,1,0},
			 {0,1,0,1,0,0}};
			 
int main(){
	int i,j;
	for(i=0;i<_h;++i,putchar('\n'))
	for(j=0;j<_w;++j)
		printf("%c",p[(i+_y)%4][(j+_x)%6]?'1':'0');
	return 0;
}
