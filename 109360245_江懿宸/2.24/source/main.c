#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	 
	printf("Enter a integer \n,and I will tell you this numeber is Odd or Even:");
	scanf_s("%d", &a);
	b = a % 2;
	if (b == 0)
	{
		printf("This integer is Even\n");
	}
	if (b == 1)
	{
		printf("This integer is Odd\n");
    }

	system("pause");
	return 0;
}