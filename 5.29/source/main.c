#include<stdio.h>
#include<stdlib.h>

int clm(int c , int d);

int main(void){
	int a,b,x;
	printf("�п�J��ӼƦr");
	scanf("%d %d", &a, &b);
	x = clm(a,b);
	printf("�̤p������:%d", x);
	system("pause");
	return 0;
}

int clm(int c, int d){
	int i,j,z=1,y=1;
	while (z != 0){
		y += 1;
		i = y % c;
		j = y % d;
		z = i + j;
		
	}
	return y;
}