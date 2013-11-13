#include<stdio.h>
#include<string.h>

void main()
{
	int i, j, a=0, max=0;
	char kalimat[100], x;
	printf("Input the sentences: ");
	scanf("%[^\n]s", &kalimat); fflush(stdin);

	for(i=0;i<strlen(kalimat);i++)
	{
		a=0;
		for(j=0; j<strlen(kalimat);j++)
		{
			if(kalimat[i] == kalimat[j])
			{
				a++;
			}
		}
		if(max < a)
		{
			max = a;
			x = kalimat[i];
		}
	}
	printf("Karakter berulang terbanyak dalam \"%s\" adalah '%c' sebanyak %d kali", kalimat, x, max);
	getchar();
}
