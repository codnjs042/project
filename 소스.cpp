#include<stdio.h>

int main(void) {
	int* a;
	int b = 1;
	a = &b; //포인터 a가 b를 가리킴
	printf("%d", b); 
	*a = 20; //포인터 a가 b를 가리키는 상태에서 값이 변경되므로 b의 값이 변경됨.
	printf("%d", b);
	return 0;
}