#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    char fras[52];
    int i, k;

    while(fgets(fras, 50, stdin) != NULL)
    {
        i = 0; k = 0;
        while(fras[i] != '\0')
        {
            if(fras[i] == ' ') i++;
            else{
                if(k % 2 == 0) {fras[i] = toupper(fras[i]); i++; k++;}
                else{fras[i] = tolower(fras[i]); i++; k++;}
            }
        }
        for(i = 0; i < strlen(fras); i++)
        {
            printf("%c", fras[i]);
        }
        printf("\n");
    }
    return 0;
}