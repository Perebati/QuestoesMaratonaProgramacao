#include <iostream>

using namespace std;

int main()
{
    int n, g, i = 0, s = 0, sum = 0;
    char r[101];
    int v[101];
    char c;

    scanf("%d %d", &n, &g);

    while(n--)
    {
        scanf(" %c %d", &r[i], &v[i]);
        i++;
        s++;
    }

    scanf(" %d", &n);
    while(n--)
    {
        scanf(" %c", &c);
        for(i = 0; i < s; i++)
        {
            if((char)c == r[i])
            {
                sum += v[i];
                break;
            }
        } 
    }

    if(sum >= g)
    {
        cout << sum << endl << "You shall pass!" << endl;
    }else
    {
        cout << sum << endl << "My precioooous" << endl;
    }

    return 0;
}