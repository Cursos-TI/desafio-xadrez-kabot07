#include <stdio.h>

int main() {

    printf("*********    XADREZ EM C++    **********");
    printf("\n");
 
    // ============================================== TORRE
    // MOVER a TORRE 5 casas para a direita:
    for (int torre = 0; torre < 5; torre++){
        printf("Torre: Direita\n"); // direção do movimento
    }
  
/* 
    // MOVER a TORRE 5 casas para a esquerda:
    for (int torre = 0; torre < 5; torre++){
        printf("Torre: Esquerda\n"); // direção do movimento
    }
 */
    // MOVER RAINHA 8 casas para a esquerda
    int rainha = 0;

    while (rainha <= 8){
      
        if(rainha < 8)
        {
            printf("Rainha: Esquerda\n" ); // direção do movimento
        }
        

        rainha ++;
    }
  
    // ============================================== RAINHA
 /*
    // MOVER RAINHA 8 casas para a direita
    int rainha = 0;

    while (rainha <= 8){
      
        if(rainha < 8)
        {
            printf("Rainha: Direita\n" ); // direção do movimento
        }
        

        rainha ++;
    }

    // MOVER RAINHA 8 casas para cima
    int rainha = 0;

    while (rainha <= 8){
      
        if(rainha < 8)
        {
            printf("Rainha: Cima\n" ); // direção do movimento
        }
        

        rainha ++;
    }

    // MOVER RAINHA 8 casas para baixo
    int rainha = 0;

    while (rainha <= 8){
      
        if(rainha < 8)
        {
            printf("Rainha: Baixo\n" ); // direção do movimento
        }
        

        rainha ++;
    }
 */
    // ============================================== BISPO
    // MOVER BISPO : 5 casas na diagonal superior esquerda


    int bispo = 0;

    do { 
    
        if(bispo % 2 == 0){
            printf(" Bispo Esquerda\n"); // direção do movimento 1
        
        } else {
            printf(" Bispo Cima\n"); // direção do movimento 2

        } bispo++; 


    } while (bispo < 10);
/*
    // MOVER BISPO : 5 casas na diagonal superior direita


    int bispo = 0;

    do { 
    
        if(bispo % 2 == 0){
            printf(" Bispo Direita\n"); // direção do movimento 1
        
        } else {
            printf(" Bispo Cima\n"); // direção do movimento 2

        } bispo++; 

    } while (bispo < 10);
*/

    
    
    // Karol Botelho
    return 0;
}
