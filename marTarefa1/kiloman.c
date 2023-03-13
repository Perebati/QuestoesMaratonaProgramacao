#include <stdio.h>

int main()
{
    int n, b, i, k;
    char tiro[52];
    char mov[52];
    int soma;

    scanf(" %d", &n);

    for(i = 0; i < n; i++)
    {
        soma = 0;
        scanf("%d", &b);
        {
            for(k = 0; k < b; k++)
            {
                scanf(" %d", &tiro[k]);
            }
            scanf(" %s", mov);
        
            for(k = 0; k < b; k++)
            {
                if((tiro[k] > 2) && (mov[k] == 74)) {soma++;}
                else if((tiro[k] < 3) && (mov[k] == 83)) {soma++;}
            }
            printf("%d\n", soma);
        }
    }

    return 0;
}