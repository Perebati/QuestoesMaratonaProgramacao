#include <stdio.h>

int main()
{
    int n, i, k = 1, aux;
    int v[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    
    aux = v[0];

    for(i = 1; i < n; i++)
    {
        if(v[i] < aux)
        {
            aux = v[i];
            k = i + 1;
        }
    }

    printf("%d\n", k);
    
    return 0;
}