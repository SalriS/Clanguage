#include<stdio.h>
int main(void)
{
	int age;
	double height;

	printf("���̿�Ű���Է��Ͻÿ�:");
	scanf("%d%lf", &age, &height);
	printf("���� = %d��, Ű = %.1lf cm\n", age, height);

	return 0;
}