#include <stdio.h>
#include <string.h>
#include <math.h>

void bin(char str1[])
{
    int i;
    char k[15];
    int sum = 0, sum2;
    for(i = 0; i < strlen(str1); i++)
    {
        if(str1[i] == '1'){sum += pow(2, i);}
    }
    printf("%d\n", sum);
    sum2 = sum; i = 0;
    while(sum2 > 16)
    {
        k[i] = sum2 % 16;
        i++;
    }

}

int main()
{
    int n;
    char str1[100];
    char base[5];

    scanf("%d", &n);

    while (n--)
    {
        scanf("%s %s", str1, base);
        if(!strcmp(base, "bin")){bin(str1);}
        else if(!strcmp(base, "dec")){}
        else{}


    }
    
    return 0;
}

