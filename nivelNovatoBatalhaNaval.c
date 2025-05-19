#include <stdio.h>
#include <string.h>

int main()
{
    // Declara e atribui valores as variáveis linhas e water
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int agua[10][10] = 
    {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

    // Ajusta o navio na horizontal
    agua[4][5] = 3;
    agua[4][6] = 3;
    agua[4][7] = 3;


    // Ajusta o navio na vertical
    agua[2][7] = 3;
    agua[3][7] = 3;
   

    // Inicia o tabuleiro
    
    printf(" TABULEIRO BATALHA NAVAL \n");
    printf(" ");

    // Itera sobre a linha
    for (int k = 0; k < 10; k++)
    {
        printf(" %c", linha[k]);
    }
    
    printf(" ");
    printf("\n");

    // Itera sobre a coluna
    for (int i = 0; i < 10; i++)
    {
        printf("%d", i + 1);

        // Itera e printa os valores da variavél agua
        for (int j = 0; j < 10; j++)
        {
            printf(" %d", agua[i][j]);

        }

    printf("\n");
    
    }
   

    return 0;
}