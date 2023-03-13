#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, i;
    int v[3], aux[3];

    scanf("%d %d %d", &v[0], &v[1], &v[2]);
    aux[0] = v[0]; aux[1] = v[1]; aux[2] = v[2];

    sort(v, v + 3);

    printf("%d\n%d\n%d\n", v[0], v[1], v[2]);
    printf("\n%d\n%d\n%d\n", aux[0], aux[1], aux[2]);

    return 0;
}