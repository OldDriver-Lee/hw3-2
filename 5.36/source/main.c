#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

void hanoi(int num, char start, char temp, char end){

	if (num > 0){

		hanoi(num - 1, start, end, temp);

		printf("%d  %c -> %c  \n",num, start, end); /* ��ܲ��ʪ��p */

		hanoi(num - 1, temp, start, end);

	}

}

int main(){
	int a;
	printf("�п�J�Фl��:");
	scanf("%d", &a);
	hanoi(a, '1', '2', '3');    /*�|�ӽL�l�A�HA���_�l�W�A�HC���ؼЬW�A�HB���Ȧs�W*/
	system("pause");
	return 0;

}



