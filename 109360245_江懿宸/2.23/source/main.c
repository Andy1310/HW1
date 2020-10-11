#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c;
		printf("Enter three different integer:");
		scanf_s("%d%d%d", &a, &b, &c);
		if (a >= b)
		{
			if (a >= c)
			{
				printf("Largest:%d\n", a);
				if (b >= c)
				{
				    printf("Smallest:%d\n", c);
			    }
				else
				{
					printf("Smallest:%d\n", b);
				}
			}
			else
			{
				printf("Largest:%d\n", c);
				printf("Smallest:%d\n", b);
			}                
		}
		else if (b >= a)
		{
			if (b >= c)
			{
				printf("Largest:%d\n", b);
				if (c >= a)
				{
					printf("Smallest:%d\n", a);
				}
				else
				{
					printf("Smallest:%d\n", c);
				}

			}
			else
			{
				printf("Largest:%d\n", c);
				printf("Smallest:%d\n", a);
			}

		}

		system("pause");
		return 0;
}