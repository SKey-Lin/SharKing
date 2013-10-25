#include <stdio.h>


void main()
{
	int a = 1, b = 0, c = 0, x, d = 1;
	printf("Input how much you want to show the * : ");
	scanf("%d", &x); fflush(stdin);
	while (a <= x)
	{
		b = 0;
		while (b < (x - d))
		{
			printf(" ");
			b++;
		}
		c = 1;
		while (c <= a+(a-1))
		{
			printf("*");
			c++;
		}
		printf("\n");
		a++;
		d++;
	}
	getchar();
}
