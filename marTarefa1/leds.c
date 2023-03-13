#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, j, k;
    int qtd;
    char v[110];
    int map[10]= {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        qtd = 0;
        scanf(" %s", v);

        j = 0;
        for(k = 0; k < strlen(v); k++)
        {
            qtd = qtd + map[v[j] - '0'];
            j++;
        }
        printf("%d leds\n", qtd);
    }
    return 0;
}