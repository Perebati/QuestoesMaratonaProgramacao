#include <stdio.h>
#include <string.h>

int main()
{
    int bilhet, pessoas, dupli;
    int pessoasM[20004];
    int i, k;

    scanf("%d %d", &bilhet, &pessoas);

    while (bilhet != 0 && pessoas != 0) 
    {
        memset(pessoasM, 0, sizeof(pessoasM));

        for (i = 0; i < pessoas; i++) 
        {
            scanf("%d", &k);
            pessoasM[k]++;
        }
        dupli = 0;
        for (i = 0; i <= bilhet; i++) 
        {
            if (pessoasM[i] > 1) dupli++;
        }

        printf("%d\n", dupli);
        scanf("%d %d", &bilhet, &pessoas);
    }

    return 0;
}