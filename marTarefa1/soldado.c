#include <stdio.h>
 
int main () 
{
    int n, i, count;
    char mov;
    char posicoes[4] = {'N', 'L', 'S', 'O'};
 
    scanf ("%d", &n);
    while (n) 
    {
        count = 0;
 
        scanf ("%c", &mov);
        for (i = 0; i < n; i++) 
        {
            scanf ("%c", &mov);
            if (mov == 'D') count++;
            else if (mov == 'E') count--;
        }
         
        count = ((count%4) + 4) % 4;

        printf ("%c\n", posicoes[count]);
        
        scanf ("%d", &n);
    }
    return 0;
}