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

	printf("변수a의값=%d\n", a);
	printf("변수b의겂=%d\n", b);
	printf("변수c의값=%d\n", c);
	printf("변수d의값=%.1lf\n", d);
	printf("변수ch의값=%c", ch);

	
	return 0;
}