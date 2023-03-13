#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2;
    int a, b;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    while(x1 || x2 || y1 || y2)
    {
        a = abs(x1 - x2);
        b = abs(y1 - y2);

        if(x1 == x2 && y1 == y2)
        {
            printf("0\n");
        }
        else if(x1 == x2 || y1 == y2)
        {
            printf("1\n");
        }
        else if((a - b) == 0)
        {
            printf("1\n");
        }else{
            printf("2\n");
        }

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }
    return 0;
}