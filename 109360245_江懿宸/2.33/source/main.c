#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	float m, l, pm, fe, tol, total;
	printf("�п�J�H�U��T�A�ڱN�|�i�D�A�@�ѤU�Ӷ}���Ҫ᪺�O��\n");
	printf("�п�J�@��Ѫ��`���{��(km):");
	scanf_s("%f", &m);
	printf("�п�J�@���ɨT�o�h�ֿ�:");
	scanf_s("%f", &l);
	printf("�п�J�����@���ɯ��p�h�֤���:");
	scanf_s("%f", &pm);
	printf("�п�J�@�Ѫ������O:");
	scanf_s("%f", &fe);
	printf("�п�J�@�Ѫ��q��O(�L���O):");
	scanf_s("%f", &tol);
	total = fe + tol + (m / pm)*l;
	printf("�@�ѤU�Ӫ�����:%f\n",total);

	system("pause");
	return 0;

}