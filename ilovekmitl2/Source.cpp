#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int num;
	int cal;
	printf(" Enter number : ");
	scanf_s("%d", &num);
	for (int i = 1;i <= 12;i++) {
		cal = num * i;
		printf("%d", num);
		printf(" x ");
		printf("%d", i);
		printf("  = %d\n", cal);
		
	}
	return 0;
}