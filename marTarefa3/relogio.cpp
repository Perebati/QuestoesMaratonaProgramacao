#include <stdio.h>

int main() {
    
    int h, m, rh, rm;
    
    while (scanf("%i %i", &h, &m) != EOF)
    {   
        rh = h * 12 / 360;
        rm = m * 60 / 360;
        printf("%02i:%02i\n", rh, rm);
    }
    return 0;
}