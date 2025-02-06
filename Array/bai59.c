#include<stdio.h>

int main(){
	int n;
	char can[][5]={"Canh","Tan","Nham","Quy","Giap",
					"At","Binh","Dinh","Mau","Ky"};
					
	char chi[][5]={"Than","Dau","Tuat","Hoi","Ti","Suu",
					"Dan","Mao","Thin","Ty","Ngo","Mui"};
	printf("Nhap nam: ");
	scanf("%d",&n);
	printf("%d - %s %s\n",n,can[n%10],chi[n%12]);
	printf("%d - %s %s\n",n+60,can[n%10],chi[n%12]);
	return 0;
}
