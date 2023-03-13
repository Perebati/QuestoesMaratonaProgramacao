#include <stdio.h>

int main()
{
    int n, i, p, h[10004];
    scanf("%d", &n);

    while (n) 
    {
        p = 0;

        for (i = 0; i < n; i++) scanf("%d", &h[i]);

        for (i = 0; i < n; i++) 
        {
            int x = ((i - 1) % n + n) % n;
            int aux = (i + 1) % n;

            if (h[i] > h[x] && h[i] > h[aux] || 
            h[i] < h[x] && h[i] < h[aux]) p++;
        }
        printf("%d\n", p);
        scanf("%d", &n);
    }

    return 0;
}