#include<stdio.h>

int main(void) {
	int a;
	int b, c;
	double d;
	char ch;

	a = 10;
	b = a;
	c = b + 20;
	d = 3.5;
	ch = 'A';

	printf("����a�ǰ�=%d\n", a);
	printf("����b�ǁ�=%d\n", b);
	printf("����c�ǰ�=%d\n", c);
	printf("����d�ǰ�=%.1lf\n", d);
	printf("����ch�ǰ�=%c", ch);

	
	return 0;
}