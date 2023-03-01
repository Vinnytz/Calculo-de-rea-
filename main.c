#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float area, comprimento, largura;
     setlocale(LC_ALL, "");

    printf("Este programa calcula a area de um terreno.\n"
           "Insira o comprimento em metros: ");
   scanf("%f", &comprimento);
   printf("Insira a largura em metros: ");
   scanf("%f", &largura);
   area=comprimento*largura;

   printf("A area do terreno é de %.2f metros.", area);

    return 0;
}
