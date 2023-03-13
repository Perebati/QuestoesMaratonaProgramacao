#include <stdio.h>

int main()
{
    int alt, comp;
    int i, aux, k, cont;

    scanf("%d %d", &alt, &comp);

    while (alt && comp) 
    {
        cont = 0;
        for (i = 0; i < comp; ++i) 
        {
            scanf("%d", &k);

            if (i = 0) cont += alt - k;
            else if (k < aux) cont += aux - k;

            aux = k;
        }
        printf("%d\n", cont);
        scanf("%d %d", &alt, &comp);
    }

    return 0;
}