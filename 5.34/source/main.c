#include<stdio.h>
#include<stdlib.h>

int ggininder(int a, int b);

int main(void)
{
	int x, y, z;
	printf("�п�J���p�⤧�ƭ�:(x y)");
	scanf_s("%d %d", &x, &y);
	z = ggininder(x, y);
	printf("���׬�:%d\n", z);
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