#include <stdio.h>

int main() {

int peca, movimento;



    printf("************* XADREZ  **********");
    printf("\n");
 
// MENU para escolher a peça

    printf("Escolha a peça que irá movimentar: \n");
    printf("1. TORRE\n");
    printf("2. BISPO\n");
    printf("3. RAINHA\n");
    printf("4. CAVALO\n");
    printf("PEÇA: ");
    scanf("%d", &peca);

    switch (peca) {

    case 1:  //TORRE
    printf(" * TORRE *  \n"); //MENU PARA ESCOLHER O MOVIMENTO
    printf ("Escolha o movimento: \n");

    printf ("1. Direita \n");
    printf ("2. Esquerda \n");

    printf ("Movimento: ");
    scanf("%d", &movimento);

    printf("\n");
       
        switch (movimento) {

            case 1: 
            // MOVER a TORRE 5 casas para a direita:
            for (int torre = 0; torre < 5; torre++){
                printf("Torre: Direita\n"); // direção do movimento
            }
            break;

            case 2: 
            // MOVER a TORRE 5 casas para a esquerda:
            for (int torre = 0; torre < 5; torre++){
                 printf("Torre: Esquerda\n"); // direção do movimento
            }

            break;
            default:    
                printf("Movimento Inválido");
        
        }
        break;
    
    case 2: // BISPO
    printf (" * BISPO * \n"); //MENU PARA ESCOLHER O MOVIMENTO
    printf ("Escolha o movimento:\n");

    printf ("1. Diagonal Superior Esquerda \n");
    printf ("2. Diagonal Superior Direita\n");
    printf ("3. Diagonal Inferior Esquerda\n");
    printf ("4. Diagonal Inferior Direita\n");
   
    printf ("Movimento:  ");
    scanf("%d", &movimento);

    int bispo = 0;

      
        switch (movimento) {

            case 1: 
            // MOVER BISPO : 5 casas na diagonal superior esquerda

             do { 
                 if(bispo % 2 == 0){
                printf(" Bispo Esquerda\n"); // direção do movimento 1
        
            } else {
            printf(" Bispo Cima\n"); // direção do movimento 2

            } bispo++; 


            } while (bispo < 10);

            break;

            case 2:
             // MOVER BISPO : 5 casas na diagonal superior direita
             do { 
                 if(bispo % 2 == 0){
                 printf(" Bispo Direita\n"); // direção do movimento 1
        
             } else {
                printf(" Bispo Cima\n"); // direção do movimento 2

             } bispo++; 


             } while (bispo < 10);

            break;

            case 3:
            // MOVER BISPO : 5 casas na diagonal inferior esquerda
            do { 
                if(bispo % 2 == 0){
                 printf(" Bispo Baixo\n"); // direção do movimento 1
        
             } else {
                printf(" Bispo Esquerda\n"); // direção do movimento 2

             } bispo++; 


            } while (bispo < 10);

            break;

            case 4:
            // MOVER BISPO : 5 casas na diagonal inferior direita
            do { 
               if(bispo % 2 == 0){
                printf(" Bispo Baixo\n"); // direção do movimento 1
                
             } else {
                printf(" Bispo Direita\n"); // direção do movimento 2

             } bispo++; 


            } while (bispo < 10);

            break;
           
            default:    
                printf("Movimento Inválido");
        }
    break;
    case 3: 
    //RAINHA

    printf (" * RAINHA * \n"); //MENU PARA ESCOLHER O MOVIMENTO
    printf ("Escolha o movimento:\n");

    printf ("1. Esquerda \n");
    printf ("2. Direita \n");
    printf ("3. Cima \n");
    printf ("4. Baixo \n");
   
   
    printf ("Movimento:  ");
    scanf("%d", &movimento);

    int rainha = 0;

        switch (movimento) {
            case 1: 
            // MOVER RAINHA 8 casas para a esquerda
   
            while (rainha <= 5){
      
            if(rainha < 5) {
                 printf("Rainha: Esquerda\n" ); // direção do movimento
            }
       
            rainha ++;
                }
            break;

            case 2:     
            // MOVER RAINHA 8 casas para a direita

            while (rainha <= 5){

             if(rainha < 5) {
                printf("Rainha: Direita\n" ); // direção do movimento
             }
        
             rainha ++;
              }
             break;
       
            case 3:
             // MOVER RAINHA 8 casas para cima

            while (rainha <= 5){
      
             if(rainha < 5){
                  printf("Rainha: Cima\n" ); // direção do movimento
             }

             rainha ++;
              }
            break;

            case 4:
            // MOVER RAINHA 8 casas para baixo

            while (rainha <= 5){
      
              if(rainha < 5) {
                 printf("Rainha: Baixo\n" ); // direção do movimento
             }

                rainha ++;
                }
            break;
          
            default:    
            printf("Movimento Inválido");
        }
    break;
    case 4:
    //CAVALO

    printf (" * CAVALO * \n"); //MENU PARA ESCOLHER O MOVIMENTO
    printf ("Escolha o movimento:\n");
   
    printf ("1. Cima (2x) -> Direita\n");
    printf ("2. Cima (2x)   -> Esquerda\n");
    printf ("3. Baixo (2x)  -> Direita\n");
    printf ("4. Baixo (2x) -> Esquerda\n");
    printf ("5. Direita (2x)  -> Cima\n");
    printf ("6. Direita (2x)  -> Baixo\n");
    printf ("7. Esquerda (2x)  -> Cima\n");
    printf ("8. Esquerda (2x)  -> Baixo\n");
    
    printf ("Movimento:  ");
    scanf("%d", &movimento);
    
    int cavalo = 1; // flag para controlar o movimento L
    
    switch (movimento) {
        

        
        case 1:
        // MOVER CAVALO: 2 cima 1 direita
        
        while (cavalo--)
         {
            for (int i = 0; i < 2; i++) {
            printf("Cima\n"); //imprime "cima" duas vezes
            }
             printf("Direita\n"); //imprime "Direita" uma vez
         }
        break;

        case 2: 
        // MOVER CAVALO: 2 cima 1 esquerda

        while (cavalo--)
         {
            for (int i = 0; i < 2; i++) {
            printf("Cima\n"); //imprime "cima" duas vezes
            }
             printf("Esquerda\n"); //imprime "Direita" uma vez
         }
        break;

        case 3:
         // MOVER CAVALO: 2 baixo 1 direita
     
        while (cavalo--)
         {
            for (int i = 0; i < 2; i++) {
                printf("Baixo\n"); //imprime "cima" duas vezes
                }
                printf("Direita\n"); //imprime "Direita" uma vez
         }
        break;
   
        case 4: 
        // MOVER CAVALO: 2 baixo 1 esquerda

        while (cavalo--)
         {
            for (int i = 0; i < 2; i++) {
                printf("Baixo\n"); //imprime "cima" duas vezes
                }
                printf("Esquerda\n"); //imprime "Direita" uma vez
         }

        break;

        case 5:
        // MOVER CAVALO: 2 direta 1 cima

        while (cavalo--)
         {
            for (int i = 0; i < 2; i++) {
                printf("Direita\n"); //imprime "cima" duas vezes
                }
                printf("Cima\n"); //imprime "Direita" uma vez

        }
        break;
   
        case 6:
        // MOVER CAVALO: 2 direta 1 baixa

        while (cavalo--)
        {
            for (int i = 0; i < 2; i++) {
                printf("Direita\n"); //imprime "cima" duas vezes
                }
                printf("Baixo\n"); //imprime "Direita" uma vez

           }
        break;
   
        case 7:
        // MOVER CAVALO: 2 esquerda 1 cima

        while (cavalo--)
        {
            for (int i = 0; i < 2; i++) {
                printf("Esquerda\n"); //imprime "cima" duas vezes
                }
                printf("Cima\n"); //imprime "Direita" uma vez
        }
        break;
  
        case 8:
        // MOVER CAVALO: 2 esquerda 1 baixa

        while (cavalo--)
        {
            for (int i = 0; i < 2; i++) {
                printf("Esquerda\n"); //imprime "cima" duas vezes
                }
                printf("Baixo\n"); //imprime "Direita" uma vez
        }

        break;
        default:    
            printf("Movimento Inválido");
    }
break;
    default:    
        printf("Peça Inválida");
}


// Karol Botelho
return 0;
}
