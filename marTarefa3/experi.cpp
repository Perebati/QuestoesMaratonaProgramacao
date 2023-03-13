#include <stdio.h>
#include <string.h>

int main()
{
    int n, aux, i, sum = 0;
    char anim[4] = {'C', 'R', 'S', '\0'};
    int somat[3] = {0};
    char c;

    scanf("%d", &n);
    while(n--)
    {
        scanf(" %d %c", &aux, &c);
        for(i = 0; i < 3; i++)
        {
            if(c == anim[i])
            {
                somat[i] += aux;
                sum += aux;
                break;
            }
        }
    }
    
    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", somat[0]);
    printf("Total de ratos: %d\n", somat[1]);
    printf("Total de sapos: %d\n", somat[2]);
    printf("Percentual de coelhos: %.2lf %\n", ((float)somat[0] / (float)sum) * 100);
    printf("Percentual de ratos: %.2lf %\n", ((float)somat[1] / (float)sum) * 100);
    printf("Percentual de sapos: %.2lf %\n", ((float)somat[2] / (float)sum) * 100);


    return 0;
}