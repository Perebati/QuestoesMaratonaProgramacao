#include <stdio.h>

int main()
{
    int n, j, c;
    char fras[54];

    scanf(" %d", &n);
    while(n--)
    {
            scanf(" %[^\n]s" , &fras);
            scanf(" %d", &c);
            
            j = 0;
            while(fras[j] != '\0')
            {
                    if((fras[j] - c) < 65) printf("%c", (fras[j] - c)+ 26);
                    else printf("%c", (fras[j] - c));
                    j++;
            }
            printf("\n");       
    }
    return 0;
}