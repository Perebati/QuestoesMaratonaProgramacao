#include <stdio.h>

int main()
{
    int v[2001] = {0};
    int i, k, n;
    
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d", &k);
        v[k]++;
    }
    
    for(i = 0; i < 2001; i++)
        if(v[i] > 0) printf("%d aparece %d vez(es)\n", i, v[i]);
        
    return 0;
}