#include <stdio.h>
#include <string.h>

int main()
{
    char line[102], str[102];
    int n, i, tam, aux;
    scanf("%d", &n);
        getchar();
    while(n--)
    {
        fgets(line, 102, stdin);

        tam = strlen(line) - 1;
        aux = tam / 2 + tam % 2;

        for (i = aux - 1; i >= 0; i--) str[aux - i - 1] = line[i];

        for (i = tam - 1; i >= aux; i--) str[tam - i - 1 + aux] = line[i];

        str[tam] = '\0';
        for(i = 0; i < tam; i++)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}