#include <stdio.h>
#include <string.h>

int main()
{
    char str1[51];
    char str2[51];

    int n, i, k, menor;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%s %s", str1, str2);
        if(strlen(str1) < strlen(str2)){menor = strlen(str1); k = 2;}
        else{menor = strlen(str2); k = 1;}
        for(i = 0; i < menor; i++)
        {
            printf("%c%c", str1[i], str2[i]);
        }
        if(k == 1) 
        for(i = menor; i < strlen(str1); i++)
        {
            printf("%c", str1[i]);
        }
        else
          for(i = menor; i < strlen(str2); i++)
        {
            printf("%c", str2[i]);
        }
        printf("\n");
    }
}