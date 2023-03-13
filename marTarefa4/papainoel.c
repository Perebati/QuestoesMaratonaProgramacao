#include <stdio.h>
#include <string.h>

int main()
{
    char *paises[24] = { "brasil", "alemanha", "austria", "coreia", "espanha", "grecia", "estados-unidos",
			"inglaterra", "australia", "portugal", "suecia", "turquia", "argentina", "chile",
			"mexico", "antardida", "canada", "irlanda", "belgica", "italia", "libia", "siria",
			"marrocos", "japao" };
    char *saudacoes[24] = { "Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!",
				"Feliz Navidad!", "Kala Christougena!", "Merry Christmas!", "Merry Christmas!",
				"Merry Christmas!", "Feliz Natal!", "God Jul!", "Mutlu Noeller", "Feliz Navidad!",
				"Feliz Navidad!", "Feliz Navidad!", "Merry Christmas!", "Merry Christmas!", "Nollaig Shona Dhuit!",
				"Zalig Kerstfeest!", "Buon Natale!", "Buon Natale!", "Milad Mubarak!", "Milad Mubarak!", "Merii Kurisumasu!" };
    char pais[25];
    int i, k = 0;

    while(scanf(" %[^\n]", pais) != EOF)
    {
        k = 0;
        for(i = 0; i < 24; i++)
        {
            if(!strcmp(paises[i], pais)) {printf("%s\n", saudacoes[i]); k++; break;}
        }
        if(k == 0) printf("--- NOT FOUND ---\n");
    }
    return 0;
}