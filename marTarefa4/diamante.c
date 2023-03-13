//<>><>

#include <stdio.h>
#include <string.h>

int main()
{
    int n, tam, i, count1, count2;
    char str[1002];

    scanf("%d", &n);
    
    while(n--)
    {
        count1 = 0; count2 = 0;
        scanf(" %[^\n]", str);
        tam = strlen(str);

        for(i = 0; i < tam; i++)
        {
            if(str[i] == '<') count1++;
            if(str[i] == '>' && count1 != 0) {count2++; count1--;}
        }
        printf("%d\n", count2);
    }
    return 0;
}