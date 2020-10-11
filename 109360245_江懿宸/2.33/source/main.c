#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	float m, l, pm, fe, tol, total;
	printf("請輸入以下資訊，我將會告訴你一天下來開車所花的費用\n");
	printf("請輸入一整天的總里程數(km):");
	scanf_s("%f", &m);
	printf("請輸入一公升汽油多少錢:");
	scanf_s("%f", &l);
	printf("請輸入平均一公升能行駛多少公里:");
	scanf_s("%f", &pm);
	printf("請輸入一天的停車費:");
	scanf_s("%f", &fe);
	printf("請輸入一天的通行費(過路費):");
	scanf_s("%f", &tol);
	total = fe + tol + (m / pm)*l;
	printf("一天下來的車資:%f\n",total);

	system("pause");
	return 0;

}