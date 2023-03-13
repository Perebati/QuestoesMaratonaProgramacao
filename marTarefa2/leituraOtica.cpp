#include <iostream>

using namespace std;

int main()
{
    int n, i, k, limite = 127, checkcount;
    int v[5];
    char alts[5] = {'A', 'B', 'C', 'D', 'E'};
    char resp;
    
    cin >> n;

    while(n)
    {  
        for(k = 0; k < n; k++)
        {
            checkcount = 0;
            for(i = 0; i < 5; i++)
            {
                cin >> v[i];
                if(v[i] <= 127)
                {
                    checkcount++;
                    resp = alts[i];
                }
            }
            if(checkcount == 1)
            {
                cout << resp << endl;
            }else{
                cout << "*" << endl;
            }
        }


        cin >> n;
    }
    return 0;
}