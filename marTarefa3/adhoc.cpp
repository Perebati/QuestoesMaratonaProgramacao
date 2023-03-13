#include <stdio.h>
#include <string.h>

int main()
{

	char a[300001], ass[10];
	unsigned long int i = 1;

    scanf("%s", ass);

	while (strcmp(ass, "0") != 0)
	{
		if (i != 1)
			printf("\n");

		scanf(" %s", a);

		if (strstr(a, ass))
		{
			printf("Instancia %u\n", i);
			printf("verdadeira\n");
		}
		else
		{
			printf("Instancia %u\n", i);
			printf("falsa\n");

		}
		i++;
        scanf("%s", ass);

	}
    return 0;
}