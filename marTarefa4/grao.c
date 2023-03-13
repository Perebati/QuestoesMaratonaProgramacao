#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    unsigned long long int x;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%llu", &x);
        x = (pow(2, x)/12)/1000;
        printf("%llu kg\n", x);
    }
    return 0;
}
