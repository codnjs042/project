#include<stdio.h>

int main(void) {
	int* a;
	int b = 1;
	a = &b; //������ a�� b�� ����Ŵ
	printf("%d", b); 
	*a = 20; //������ a�� b�� ����Ű�� ���¿��� ���� ����ǹǷ� b�� ���� �����.
	printf("%d", b);
	return 0;
}