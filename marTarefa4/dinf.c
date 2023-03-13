#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double h, c, l, z, a;

    while( scanf("%d %lf %lf %lf", &n, &h, &c, &l) != EOF)
    {
        z = sqrt(pow(h, 2) + pow(c, 2));
        a = ((z * n) * l) * 0.0001;
        printf("%.4lf\n", a);
    }
  
}