#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[3], aux, i, k, sum = 0, total = 0;

    cin >> a[0] >> a[1] >> a[2];

    aux = -1;
    k = 0;
    for(i = 0; i < 3; i++)
    {
        if(a[i] > aux)
        {
            aux = a[i];
            k = i;
        }
        sum += a[i];
    }

    if((sum - aux) > aux || k == 1)
    {
        total += a[0] * 2 + a[2] * 2;
    }
    else{
        if(k == 0)
        {
            total += a[1] * 2 + a[2] * 4;
        }
        else
        {
            total += a[0] * 4 + a[1] * 2;
        }
    }
    cout << total << endl;;


    return 0;
}