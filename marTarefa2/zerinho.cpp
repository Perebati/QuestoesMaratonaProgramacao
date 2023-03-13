#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, i, resp;
    int check1, check0;
    int num[3];
    char nomes[3] = {'A', 'B', 'C'};

    while(scanf("%d %d %d", &num[0], &num[1], &num[2]) != EOF)
    {
        check1 = 0;
        check0 = 0;
        i = 3;
        while(i--)
        {
            if(num[i] == 1)
            {
                check1++;
            }
            if(num[i] == 0)
            {
                check0++;
            }
        }
        if(check1 == 2)
        {
            i = 3;
            while(i--)
            {
                if(num[i] == 0) resp = i;
            }
            cout << nomes[resp] << endl;
        }else if(check0 == 2)
        {
            i = 3;
            while(i--)
            {
                if(num[i] == 1) resp = i;
            }
            cout << nomes[resp] << endl;
        }else{
            cout << "*" << endl;
        }
        
    }
    return 0;
}