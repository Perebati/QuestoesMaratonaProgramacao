#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, i;
    int v[3];
    int aux[3];

    scanf("%d %d %d", &v[0], &v[1], &v[2]);
    
    for(i = 0; i < 3; i++)
    {
        aux[i] = v[i];
    }

    sort(v, v + 3);

    printf("%d\n%d\n%d\n", v[0], v[1], v[2]);
    printf("\n%d\n%d\n%d", aux[0], aux[1], aux[2]);

    return 0;
}