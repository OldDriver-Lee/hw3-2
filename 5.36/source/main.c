#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

void hanoi(int num, char start, char temp, char end){

	if (num > 0){

		hanoi(num - 1, start, end, temp);

		printf("%d  %c -> %c  \n",num, start, end); /* 顯示移動狀況 */

		hanoi(num - 1, temp, start, end);

	}

}

int main(){
	int a;
	printf("請輸入碟子數:");
	scanf("%d", &a);
	hanoi(a, '1', '2', '3');    /*四個盤子，以A為起始柱，以C為目標柱，以B為暫存柱*/
	system("pause");
	return 0;

}



