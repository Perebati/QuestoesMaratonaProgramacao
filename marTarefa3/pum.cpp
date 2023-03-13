#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    n = n * 4;
    i = 1;
    while(n--)
    {
        
        if(i % 4 != 0) cout << i << " ";
        else cout << "PUM" << endl;
        i++;
    }

    return 0;
}