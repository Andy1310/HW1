#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int w ;
	float b , h;

	printf("Enter your height(meter) and weight(Kg) ,and I will tell your BMI value\n");
	printf("Height(meter) , Weight(Kg):  ");
	scanf_s("%f%d", &h, &w);
	b = w /( h * h);
	printf("your BMI is %f \n", b);
	if (b < 18.5)
	{
		printf("Underweight\n");
	}
	if (b >= 18.5 && b <= 24.9)
	{
		printf("Normal\n");
	}	
	if (b >= 25 && b <= 29.9)
	{
		printf("Overweight\n");
	}
	if (b >= 30)
	{
		printf("Obese\n");
	}
	system("pause");
	return 0;

}