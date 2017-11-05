#include<stdio.h>
#include<stdlib.h>

int ggininder(int a, int b);

int main(void)
{
	int x, y, z;
	printf("請輸入欲計算之數值:(x y)");
	scanf_s("%d %d", &x, &y);
	z = ggininder(x, y);
	printf("答案為:%d\n", z);
	system("pause");
	return 0;
}

int ggininder(int a, int b){
	int c;
	if (b == 0){
		return 1;
	}
	else {
		c = a * ggininder(a, b - 1);
	}
	return c;
}