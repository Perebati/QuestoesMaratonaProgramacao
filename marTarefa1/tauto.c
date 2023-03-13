#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main()
{
    int i;
    char frase[1001];
    char key1, key2;
    char flag[1];
    scanf(" %s", frase);
    while(frase[0] != '*')
    {
        flag[0] = "Y";
        key1 = frase[0];
        key2 = tolower(frase[0]);

        for(i = 1; i < strlen(frase); i++)
        {
            if(frase[i] == " ")
            {
                if(frase[i + 1] != key1 && frase[i + 1] != key2)
                {
                    flag[0] = "N";
                    break;
                }
            }
        }
        printf("%c", flag);
        scanf(" %s", frase);
    }

    return 0;
}