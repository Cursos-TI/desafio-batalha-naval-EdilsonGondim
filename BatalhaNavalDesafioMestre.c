#include <stdio.h>
#include <unistd.h> //BIBLIOTECA PARA USAR FUNÇÃO sleep()

#define LINHA 10       // LINHA e COLUNA para matrizes 10x10
#define COLUNA 10

#define linha 7       // linha e coluna para matrizes 7x7
#define coluna 7

int main() {

                // APRESENTAÇÃO
    printf("\n\n============================================ \n           DESAFIO BATALHA NAVAL \n        NOVATO, AVENTUREIRO E MESTRE \n============================================");
    sleep(2); // PARADA de 2 SEGUNDOS

    int matrizSoma [LINHA][COLUNA]; // MATRIZ PARA SOMAR AS MATRIZES NO TABULEIRO
    
    printf("\n\n********** DESAFIO NÍVEL NOVATO **********\n");
    sleep(2); // PARADA de 2 SEGUNDOS

            // ALGORÍTIMO PARA CRIAÇÃO DOS NAVIOS HORIZONTAL E VERTICAL
    printf("\n -MATRIZ NAVIOS HORIZONTAL E VERTICAL-\n\n");

    // CRIANDO MATRIZ PARA OS NAVIOS HORIZONTAL E VERTICAL
    int matrizHV [LINHA][COLUNA]; 
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            matrizHV [i][j] = 0;  // ADICIONANDO 0 NA MATRIZ PARA REPRESENTAR A ÁGUA

            // CONDIÇÃO PARA CRIAR NAVIO NA HORIZONTAL
            if (i == 1 && j > 5 && j < 9) {
                matrizHV [i][j] = 3;
            }
            // CONDIÇÃO PARA CRIAR NAVIO NA VERTICAL
            if (i > 0 && i < 4 && j == 0) {
                matrizHV [i][j] = 3;
            }
            printf("%d ", matrizHV [i][j]); //IMPRIME A MATRIZ CRIADA PARA OS NAVIOS HORIZONTAL E VERTICAL
           
        }
       printf("\n");
    }    
    sleep(2); // PARADA DE 2 SEGUNDOS
        // CRIANDO TABULEIRO
    printf("\n           -TABULEIRO- \n-ÁGUA (representado pelo número 0) \n-NAVIOS HORIZONTAL E VERTICAL(representados pelo número 3)\n\n");

    int matriz[LINHA][COLUNA];

    // LAÇO PARA CRIAR ÍNDICE DE COLUNAS DO TABULEIRO
    for (char g = 'A'; g < 'L'; g++) {
        if (g == 'A') {
            printf("   ");
        } else
        printf("%c ", g - 1);
    } 
    printf("\n");
    //CRIANDO MATRIZ PARA O TABULEIRO
    
    for (int i = 0; i < LINHA; i++) {
        // CONDIÇÃO PARA CRIAR ÍNDICE DE LINHAS DO TABULEIRO
        if (i < 10) {           
            printf("%d- ", i);
        }
        for (int j = 0; j < COLUNA; j++) {
            matriz [i][j] = 0;  // ADICIONANDO 0 NA MATRIZ PARA REPRESENTAR A ÁGUA
            matrizSoma [i][j] = matriz [i][j] + matrizHV [i][j];

            //IMPRIMINDO AS MATRIZES AO TABULEIRO
            printf("%d ", matrizSoma [i][j]);
        }
        printf("\n");
    }

    printf("\n=======================================\n");

    printf("\nPressione qualquer tecla para proximo nível...\n");
    getchar();  //FUNÇÃO PRESSIONE QUALQUER TECLA PARA CONTINUAR O PROGRAMA

    printf("\n********** DESAFIO NÍVEL AVENTUREIRO **********\n");
    sleep(2); // PARADA DE 2 SEGUNDOS

        //ALGORÍTIMO PARA CRIAÇÃO DA MATRIZ NAVIOS NA DIAGONAL   
    printf("\n -MATRIZ NAVIOS DIAGONAIS-\n\n");

    int matrizdiagonal [LINHA][COLUNA];

    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            matrizdiagonal [i][j] = 0;  // ADICIONANDO 0 NA MATRIZ PARA REPRESENTAR A ÁGUA

            // ALGORÍTIMO PARA CRIAR NAVIO DIAGONAL (cima + direita, baixo + esquerda)
            if (i == 7 && j == 3) {
                matrizdiagonal [i][j] = 3;
            } if (i == 8 && j == 2) {
                matrizdiagonal [i][j] = 3;
            } if (i == 9 && j == 1) {
                matrizdiagonal [i][j] = 3;
            }

            // ALGORÍTIMO PARA CRIAR NAVIO DIAGONAL (cima + esquerda, baixo + direita)
            if (i == 6 && j == 6) {
                matrizdiagonal [i][j] = 3;
            } if (i == 7 && j == 7) {
                matrizdiagonal [i][j] = 3;
            } if (i == 8 && j == 8) {
                matrizdiagonal [i][j] = 3;
            }
            printf("%d ", matrizdiagonal [i][j]); //IMPRIMINDO MATRIZ COM OS NAVIOS NA DIAGONAL
        }
        printf("\n");
    }    
    sleep(2);  // PARADA DE 2 SEGUNDOS

    // CRIANDO TABULEIRO
    printf("\n           -TABULEIRO- \n-ÁGUA (representado pelo número 0) \n-NAVIOS HORIZONTAL, VERTICAL E DIAGONAL (representados pelo número 3)\n\n");

    // LAÇO PARA CRIAR ÍNDICE DE COLUNAS DO TABULEIRO
    for (char g = 'A'; g < 'L'; g++) {
        if (g == 'A') {
            printf("   ");
        } else
        printf("%c ", g - 1);
    } 
    printf("\n");
    //CRIANDO MATRIZ PARA O TABULEIRO
    
    for (int i = 0; i < LINHA; i++) {
        // CONDIÇÃO PARA CRIAR ÍNDICE DE LINHAS DO TABULEIRO
        if (i < 10) {           
            printf("%d- ", i);
        }
        for (int j = 0; j < COLUNA; j++) {
            matriz [i][j] = 0; // ADICIONANDO 0 NA MATRIZ PARA REPRESENTAR A ÁGUA
            matrizSoma [i][j] = matriz [i][j] + matrizHV [i][j] + matrizdiagonal [i][j];

            //IMPRIMINDO AS MATRIZES AO TABULEIRO
            printf("%d ", matrizSoma [i][j]);
        }
        printf("\n");
        }

    printf("\n=======================================\n");

    printf("\nPressione qualquer tecla para proximo nível...\n");
    getchar();  //FUNÇÃO PRESSIONE QUALQUER TECLA PARA CONTINUAR O PROGRAMA

    printf("\n\n********** DESAFIO NÍVEL MESTRE **********\n");

    sleep(2); //PARADA DE 2 SEGUNDOS

            // CRIANDO MATRIZ CONE
    printf("\n -MATRIZ HABILIDADE CONE 7x7-\n\n");
    int matrizcone [linha][coluna];

    for (int i = 0; i < linha; i ++){
        for(int j = 0; j < coluna; j++) { 
            matrizcone [i][j] = 0;  // ADICIONANDO 0 NA MATRIZ PARA REPRESENTAR A ÁGUA

            //CONDIÇÕES PARA CRIAÇÃO DA MATRIZ CONE       
            if (i == 1 && j == 3) {
                matrizcone [i][j] = 1;
            } if (i == 2 && j > 1 && j < 5) {
                matrizcone [i][j] = 1;
            }if (i == 3 && j > 0 && j < 6) {
                matrizcone [i][j] = 1;
            }
            printf("%d ", matrizcone [i][j]); //IMPRIMINDO MATRIZ CONE 7x7
            }
            printf("\n");
        }

    printf("\n----------------------------------------\n");
    sleep(2); //PARADA DE 2 SEGUNDOS
        // CRIANDO MATRIZ CRUZ
    printf("\n -MATRIZ HABILIDADE CRUZ 7x7-\n\n");
    int matrizcruz [linha][coluna];

    for (int i = 0; i < linha; i ++){
        for(int j = 0; j < coluna; j++) { 
             matrizcruz [i][j] = 0;  // ADICIONANDO 0 NA MATRIZ PARA REPRESENTAR A ÁGUA
             
             //CONDIÇÕES PARA CRIAÇÃO DA MATRIZ CRUZ  
            if (j == 3 && i > 0 && i < 4) {
                 matrizcruz [i][j] = 1;
            } if (i == 2 && j > 0 && j < 6){
                 matrizcruz [i][j] = 1;
            }
            printf("%d ", matrizcruz [i][j]);  //IMPRIMINDO MATRIZ CRUZ 7x7
            }
            printf("\n");
        }

    printf("\n----------------------------------------\n");
    sleep(2); //PARADA DE 2 SEGUNDOS
        // CRIANDO MATRIZ OCTAEDRO
    printf("\n -MATRIZ HABILIDADE OCTAEDRO 7x7-\n\n");

   int matrizoctaedro [linha][coluna];

   for (int i = 0; i < linha; i ++){
       for(int j = 0; j < coluna; j++) { 
           matrizoctaedro [i][j] = 0;   // ADICIONANDO 0 NA MATRIZ PARA REPRESENTAR A ÁGUA

           //CONDIÇÕES PARA CRIAÇÃO DA MATRIZ OCTAEDRO        
           if (j == 2 && i > 0 && i < 4 ) {
               matrizoctaedro [i][j] = 1;
           } if (i == 2 && j > 0 && j < 4) {
               matrizoctaedro [i][j] = 1;
           }
           printf("%d ", matrizoctaedro [i][j]);  // IMPRIMINDO MATRIZ OCTAEDRO 7x7
           }
           printf("\n");
       }

    printf("\n----------------------------------------\n");
   
    //CRIANDO MATRIZ CONE 10x10, MATRIZ CRUZ 10x10 E MATRIZ OCTAEDRO 10X10

    int matrizcone10 [LINHA][COLUNA];
    int matrizcruz10 [LINHA][COLUNA];
    int matrizoctaedro10 [LINHA][COLUNA]; 

          // CRIANDO MATRIZ CONE 10X10
    for (int i = 0; i < LINHA; i ++){
        for(int j = 0; j < COLUNA; j++) { 
            matrizcone10 [i][j] = 0;  // ADICIONANDO 0 NA MATRIZ PARA REPRESENTAR A ÁGUA

            //CONDIÇÕES PARA CRIAÇÃO DA MATRIZ CONE       
            if (i == 0 && j == 2) {
                matrizcone10 [i][j] = 1;
            } if (i == 1 && j > 0 && j < 4) {
                matrizcone10 [i][j] = 1;
            }if (i == 2 && j >= 0 && j < 5) {
                matrizcone10 [i][j] = 1;
            }
            }
        }

        // CRIANDO MATRIZ CRUZ 10x10
    for (int i = 0; i < LINHA; i ++){
        for(int j = 0; j < COLUNA; j++) { 
             matrizcruz10 [i][j] = 0;  // ADICIONANDO 0 NA MATRIZ PARA REPRESENTAR A ÁGUA
             
             //CONDIÇÕES PARA CRIAÇÃO DA MATRIZ CRUZ  
            if (j == 7 && i > 2 && i < 6) {
                 matrizcruz10 [i][j] = 1;
            } if (i == 4 && j > 4 && j < 10){
                 matrizcruz10 [i][j] = 1;
            }
            }
        }

        // CRIANDO MATRIZ OCTAEDRO 10x10
    for (int i = 0; i < LINHA; i ++){
        for(int j = 0; j < COLUNA; j++) { 
           matrizoctaedro10 [i][j] = 0;   // ADICIONANDO 0 NA MATRIZ PARA REPRESENTAR A ÁGUA

            //CONDIÇÕES PARA CRIAÇÃO DA MATRIZ OCTAEDRO        
            if (j == 4 && i > 5 && i < 9 ) {
                matrizoctaedro10 [i][j] = 1;
            } if (i == 7 && j > 2 && j < 6) {
                matrizoctaedro10 [i][j] = 1;
            }
            }
        }
    sleep(2); //PARADA DE 2 SEGUNDOS
    // CRIANDO TABULEIRO
    printf("\n           -TABULEIRO- \n-ÁGUA (representado pelo número 0) \n-NAVIOS HORIZONTAL, VERTICAL E DIAGONAL (representados pelo número 3) \n-HABILIDADE EM CONE, HABILIDADE EM CRUZ E HABILIDADE EM OCTAEDRO (representados pelo número 1) \n-NAVIOS AFETADOS (representados pelo número 5)\n\n");

    // LAÇO PARA CRIAR ÍNDICE DE COLUNAS DO TABULEIRO
    for (char g = 'A'; g < 'L'; g++) {
        if (g == 'A') {
            printf("   ");
        } else
        printf("%c ", g - 1);
    } 
    printf("\n");
    //CRIANDO MATRIZ PARA O TABULEIRO
     
    for (int i = 0; i < LINHA; i++) {
        // CONDIÇÃO PARA CRIAR ÍNDICE DE LINHAS DO TABULEIRO
        if (i < 10) {           
            printf("%d- ", i);
        }
        for (int j = 0; j < COLUNA; j++) {
            matriz [i][j] = 0; // ADICIONANDO 0 NA MATRIZ PARA REPRESENTAR A ÁGUA

            // ADICIONANDO AS MATRIZES AO TABULEIRO
            matrizSoma [i][j] = matriz [i][j] + matrizHV [i][j] + matrizdiagonal [i][j] + matrizcone10 [i][j] + matrizcruz10 [i][j] + matrizoctaedro10 [i][j];

            // CONDIÇÃO PARA ADICIONAR 5 PARA NAVIO AFETADO PELAS HABILIDADES (CONE, CRUZ OU OCTAEDRO)
            if (matrizSoma [i][j] != 0 && matrizSoma [i][j] != 1 && matrizSoma [i][j] != 3) {
                matrizSoma [i][j] = 5;
            }
            
            //IMPRIMINDO AS MATRIZES AO TABULEIRO
            printf("%d ", matrizSoma [i][j]);
        }
        printf("\n");
        }
    printf("\n=======================================\n\n");
       
    return 0;
}
