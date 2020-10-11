#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;

	printf("Enter two integer,\n and I will tell you whether the first number is the second number's multiple: ");
	scanf_s("%d%d", &a, &b);

	if (a%b == 0)
	{
		printf("First number is the second number multiple\n");
	}
	else
	{
		printf("First number is ''NOT'' the second number multiple\n");
	}

	system("pause");
	return 0;

}