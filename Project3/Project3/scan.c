#include<stdio.h>
int main(void)
{
	int age;
	double height;

	printf("나이와키를입력하시오:");
	scanf("%d%lf", &age, &height);
	printf("나이 = %d살, 키 = %.1lf cm\n", age, height);

	return 0;
}