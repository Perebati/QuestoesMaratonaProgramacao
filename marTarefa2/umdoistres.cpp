#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, i, cc1, cc2, cc3;

    char const *one = "one\0";
    string num;

    cin >> n;

    while(n--)
    {
        cc1 = 0; cc2 = 0; cc3 = 0;
        cin >> num;
        i = 0;

        if(num.size() == 5)
        {
            cout << "3" << endl;
        }
        else
        {
            while(num[i] != '\0')
            {
                if(num[i] == one[i]) cc1++; 
                i++;
            }
            if(cc1 >= 2) 
                {
                    cout << "1" << endl;
                }else{
                    cout << "2" << endl;
                }  
        }
    }
    return 0;
}