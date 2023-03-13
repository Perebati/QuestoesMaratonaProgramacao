#include <cstdio>

int leds(int n)
{
    if(n = 1) return 1;
}

int main(void)
{
    int i, n, j;
    int qtd;
    char v[110];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        qtd = 0;
        scanf(" %s", v);

        j = 0;
        while(v[j] =! '\0')
        {
            qtd += leds(v[j] - '0')
            j++;
        }
        printf("%d leds\n", qtd);
    }
    return 0;
}