#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(void)
{
	int num, squ, cub;
	 printf("number   square   cube\n");
	 
	 for (num = 0; num <= 10; num++)
	 {
		 squ = pow(num, 2);
		 cub = pow(num, 3);
		 if (num < 4)
		 {
		 printf("%d        %d        %d\n", num, squ, cub);
		 }
		 if (num >= 4 && num <= 9)
		 {
			 printf("%d        %d       %d\n", num, squ, cub);
		 }
		 if (num == 10)
		 {
			 printf("%d       %d      %d\n", num, squ, cub);
		 }
			
		}
        
		system("pause");
		return 0;

}