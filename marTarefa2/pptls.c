#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    char j1[15], j2[15];

    scanf("%d", &n);

    while (n--)
    {

    scanf(" %s %s", j2, j1);
    if (strcmp(j2, j1) == 0)
        printf("empate\n");
    else if (strcmp(j2, "spock") == 0 && strcmp(j1, "pedra") == 0)
        printf("rajesh\n");
    else if (strcmp(j2, "lagarto") == 0 && strcmp(j1, "spock") == 0)
        printf("rajesh\n");
    else if (strcmp(j2, "tesoura") == 0 && strcmp(j1, "lagarto") == 0)
        printf("rajesh\n");
    else if (strcmp(j2, "papel") == 0 && strcmp(j1, "spock") == 0)
        printf("rajesh\n");
    else if (strcmp(j2, "tesoura") == 0 && strcmp(j1, "papel") == 0)
        printf("rajesh\n");
    else if (strcmp(j2, "papel") == 0 && strcmp(j1, "pedra") == 0)
        printf("rajesh\n");
    else if (strcmp(j2, "lagarto") == 0 && strcmp(j1, "papel") == 0)
        printf("rajesh\n");
    else if (strcmp(j2, "pedra") == 0 && strcmp(j1, "lagarto") == 0)
        printf("rajesh\n");
    else if (strcmp(j2, "spock") == 0 && strcmp(j1, "tesoura") == 0)
        printf("rajesh\n");
    else if (strcmp(j2, "pedra") == 0 && strcmp(j1, "tesoura") == 0)
        printf("rajesh\n");
    else
        printf("sheldon\n");
    }
    return 0;
    }