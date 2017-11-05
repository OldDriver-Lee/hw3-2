#include<stdio.h>
#include<stdlib.h>

unsigned long long int fibonacci(unsigned int a);

/*int main(void)
{
	unsigned long long int a1 = 0, a2 = 1, a3;
	unsigned int n;
	int i;
	printf("請輸入費波納契級數:");
	scanf("%u", &n);
		if (n == 0){
			return 0;
		}
		for (i = 1; i < n; i++){
			a3 = a1 + a2;
			a1 = a2;
			a2 = a3;
		}
		printf("%llu\n", a3);
		system("pause");
		return 0;
	}*/

int main(void)
{
	unsigned long long int a1 = 0, a2 = 1, a3;
	unsigned int n = 1;
	int i;
	while (n != 0){
		n = n + 1;
		for (i = 1; i < n; i++){
			a3 = a1 + a2;
			a1 = a2;
			a2 = a3;	
		}
		if (a3 < a1 + a2){
			printf("%llu\n", a3);
		}
	}
		system("pause");
		return 0;
}


/*unsigned long long int fibonacci(unsigned int a){
	unsigned long long int a1 = 0, a2 = 1, a3;
	int i;
	if (a == 0){
		return 0;
	}
	for (i = 1; i < a; i++){
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
	}
	return a3;
}*/