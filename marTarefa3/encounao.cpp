#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char a1[1004];
    char a2[1004];

    scanf(" %d", &n);

    while(n--)
    {
        scanf( " %s", a1);
        scanf( " %s", a2);

        if(strlen(a2) > strlen(a1))
        {
            printf("nao encaixa\n");
        }

        for(i = strlen(a1) - strlen(a2), j = 0; i < strlen(a1); i++, j++)
        {
            if(a2[j] != a1[i]){printf("nao encaixa\n"); break;}
            else if(i == strlen(a1) - 1) printf("encaixa\n");
        }
    }
    return 0;
}