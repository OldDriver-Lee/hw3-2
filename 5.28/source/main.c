#include<stdio.h>
#include<stdlib.h>
int ggininder(int x);
int main(void)
{
	char a;
	printf("請輸入一個英文字母:");
	scanf("%c", &a);
	a = ggininder(a);
	printf("%c", a);
	system("pause");
	return 0;
}

int ggininder(int x){
if (65 <= x && x <= 91){
		x =x + 32;
	}
	else if (97<= x && x <= 122){
		x = x - 32;
	}
	return x;
}