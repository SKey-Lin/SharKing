#include <stdio.h>


void main()
{
	int i = 0, j = 0, n, k=0;
	printf("Input how much you want to show the * : ");
	scanf("%d", &n);
	while (i <= n)
	{
		j = (n-k);
		while (j >= 0)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i = i + 1;
		k++;
	}

	getchar();
	getchar();
}
