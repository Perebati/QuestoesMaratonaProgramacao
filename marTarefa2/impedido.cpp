#include <stdio.h>

int main()
{
    int A, D;
    int i, j, tmp;

    scanf("%d %d", &A, &D);
    while(A != 0 && D != 0)
    {
        
        int atk[A], dfs[D];
        for(i=0; i < A; i++) scanf("%d", &atk[i]);
        for(i=0; i < D; i++) scanf("%d", &dfs[i]);
        for(i=0; i < A; i++)
        {
            for(j = i + 1; j<A; j++)
            {
                if(atk[j] < atk[i])
                {
                    tmp = atk[j];
                    atk[j] = atk[i];
                    atk[i] = tmp;
                }
            }
        }
        for(i = 0; i < D; i++){
            for(j = i + 1; j < D; j++){
                if(dfs[j] < dfs[i])
                {
                    tmp = dfs[j];
                    dfs[j] = dfs[i];
                    dfs[i] = tmp;
                }
            }
        }
        if(atk[0] < dfs[0] || atk[0] < dfs[1])
            printf("Y\n");
        else
            printf("N\n");

        scanf("%d %d", &A, &D);
    }
    return 0;
}