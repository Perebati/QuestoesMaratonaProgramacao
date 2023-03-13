#include <stdio.h>

int main()
{
    int n, i;
    int x, y;
    int a, b;

    scanf("%d", &n);

    while(n)
    {
        scanf("%d %d", &x, &y);
        for(i = 0; i < n; i++)
        {
            scanf("%d %d", &a, &b);
            if(a == x || b == y){printf("divisa\n");}
            else if(a > x && b > y){printf("NE\n");}
            else if(a < x && b > y){printf("NO\n");}
            else if(a > x && b < y){printf("SE\n");}
            else if(a < x && b < y){printf("SO\n");}
        }
        
        scanf("%d", &n);
    }
}