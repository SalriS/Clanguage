#include<stdio.h>
int main(void)
{
	char a;
	printf("문자를입력하시오:");
	scanf("%c",&a);
	printf("%c의 아스키코드값은%d입니다.", a, a);
	return 0;
}