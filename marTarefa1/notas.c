#include <stdio.h>

int main()
{
    double N;
    int div;

    (scanf("%lf", &N)); 

    printf("NOTAS:\n");
    div = (N / 100);
    N = N - (div * 100);
    printf("%d nota(s) de R$ 100.00\n", div);
    div = (N / 50);
    N = N - (div * 50);
    printf("%d nota(s) de R$ 50.00\n", div);
    div = (N / 20);
    N = N - (div * 20);
    printf("%d nota(s) de R$ 20.00\n", div);
    div = (N / 10);
    N = N - (div * 10);
    printf("%d nota(s) de R$ 10.00\n", div);
    div = (N / 5);
    N = N - (div * 5);
    printf("%d nota(s) de R$ 5.00\n", div);
    div = (N / 2);
    N = N - (div * 2);
    printf("%d nota(s) de R$ 2.00\n", div);

    printf("MOEDAS:\n");
    N = (N * 100);
    div = (N / 100);
    N = N - (div * 100);
    printf("%d moeda(s) de R$ 1.00\n", div);
    div = (N / 50);
    N = N - (div * 50);
    printf("%d moeda(s) de R$ 0.50\n", div);
    div = (N / 25);
    N = N - (div * 25);
    printf("%d moeda(s) de R$ 0.25\n", div);
    div = (N / 10);
    N = N - (div * 10);
    printf("%d moeda(s) de R$ 0.10\n", div);
    div = (N / 5);
    N = N - (div * 5);
    printf("%d moeda(s) de R$ 0.05\n", div);
    div = (N / 1);
    N = N - (div * 1);
    printf("%d moeda(s) de R$ 0.01\n", div);

    return 0;
}