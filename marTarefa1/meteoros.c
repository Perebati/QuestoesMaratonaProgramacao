#include <stdio.h>>

int main()
{
    int x1, y1;
    int x2, y2;
    int n;
    int a, b;
    int i;
    int total, k = 1;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    while(x1 || y1 || x2 || y2)
    {
        total = 0;
        scanf("%d", &n);    
        for(i = 0; i < n; i++)
        {
            scanf("%d %d", &a, &b);
            if((x1 <= a && a <= x2) && (y2 <= b && b <= y1))
            {
                total++;
            }
        }
        printf("Teste %d\n", k++);
        printf("%d\n", total);
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }
    return 0;
}