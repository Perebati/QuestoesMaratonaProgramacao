#include <iostream>

using namespace std;


int main()
{
    int n;
    int a, b;
    char c;

    cin >> n;

    while(n--)
    {
        cin >> a >> c >> b;

        if(a == b)
        {
            cout << a * b << endl;
        }
        else if((int)c > 91)
        {
            cout << a + b << endl;
        }
        else 
        {
            cout << b - a << endl;
        }
    }
    return 0;
}