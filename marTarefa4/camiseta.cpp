#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef struct {
    string pessoa;
    string cor;
    char tamanho;
}Camisetas;

bool checkCam(Camisetas a1, Camisetas b1)
{
    if (a1.cor == b1.cor)
    {
        if (a1.tamanho == b1.tamanho) return a1.pessoa < b1.pessoa;
        return a1.tamanho > b1.tamanho;
    }
    return a1.cor < b1.cor;
}

int main()
{
    int num;
    bool imprime = false;

    cin >> num;

    while(num)
    {
        Camisetas cco[num];
        
        for(int i = 0; i < num; i++)
        {
            cin.get();
            getline(cin, cco[i].pessoa);
            cin >> cco[i].cor;
            cin >> cco[i].tamanho;
        }
        sort(cco, cco+num, checkCam);

        if (imprime and num != 0) cout << endl;
        imprime = true;
        for(int i = 0; i < num; i++)
        {
            cout << cco[i].cor << " " << cco[i].tamanho << " " << cco[i].pessoa << endl;
        }
        cin >> num;
    }
    return 0;
}