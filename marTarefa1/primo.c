#include <stdio.h>

int main()
{
    int n, i, a, k;
    int resultado;

    scanf(" %d", &n);

    for(i = 0; i < n; i++)
    {
        resultado = 0;
        scanf(" %d", &a);
        for (k = 2; k <= a / 2; k++) 
        {
            if (a % k == 0) 
            {
                resultado++;
            }
        }
        if (resultado == 0) printf("%d eh primo\n", a);
        else printf("%d nao eh primo\n", a);
    }
    return 0;
}   