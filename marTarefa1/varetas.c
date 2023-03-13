#include <stdio.h>

int main()
{
    int n, i;
    int c, v;
    int pares;

    scanf("%d", &n);

    while(n)
    {
        pares = 0;
        for(i = 0; i< n; i++)
        {
            scanf("%d %d", &c, &v);
            pares += (v / 2);
        }
        printf("%d\n", pares / 2);
        scanf("%d", &n);    
    }
    return 0;
}