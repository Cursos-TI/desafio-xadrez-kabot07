#include <stdio.h>
// VOID DE PEÇAS
void movimentotorre(const char* direcao, int vezes) {
    if (vezes <= 0) return;
    printf("Torre: %s\n", direcao);
    movimentotorre(direcao, vezes - 1);
}

void movimentobispo(int passo, int limite, const char* direcao1, const char* direcao2) {
    if (passo >= limite) return;
    printf("Bispo: %s\n", (passo % 2 == 0) ? direcao1 : direcao2);
    movimentobispo(passo + 1, limite, direcao1, direcao2);
}

void movimentorainha(const char* direcao, int vezes) {
    if (vezes <= 0) return;
    printf("Rainha: %s\n", direcao);
    movimentorainha(direcao, vezes - 1);
}

void movimentocavalo(const char* direcao1, const char* direcao2, int vezes) {
    if (vezes <= 0) return;
    printf("Cavalo: %s\n", direcao1);
    movimentocavalo(direcao1, direcao2, vezes - 1);
    if (vezes == 1) {
        printf("Cavalo: %s\n", direcao2);
    }
}
// ==============================================
// FUNCIONAMENTO
int main() {
    int peca, movimento;

    printf("************* XADREZ *************\n");
    printf("Escolha a peça que irá movimentar:\n");
    printf("1. TORRE\n");
    printf("2. BISPO\n");
    printf("3. RAINHA\n");
    printf("4. CAVALO\n");
    printf("PEÇA: ");
    scanf("%d", &peca);

    switch (peca) {
        case 1: //TORRE
            printf(" * TORRE *\n");
            printf("1. Direita \n");
            printf("2. Esquerda \n"); 
            printf("Movimento: ");
            scanf("%d", &movimento);
            if (movimento == 1)
            movimentotorre("Direita", 5);
            else if (movimento == 2)
            movimentotorre("Esquerda", 5);
            else
                printf("Movimento inválido!\n");
            break;

        case 2: //BISPO
            printf(" * BISPO *\n");
            printf("1. Diagonal Superior Esquerda\n");
            printf("2. Diagonal Superior Direita\n");
            printf("3. Diagonal Inferior Esquerda\n");
            printf("4. Diagonal Inferior Direita\n");
            printf("Movimento: ");
            scanf("%d", &movimento);
            switch (movimento) {
                case 1:
                movimentobispo(0, 10, "Esquerda", "Cima");
                    break;
                case 2:
                movimentobispo(0, 10, "Direita", "Cima");
                    break;
                case 3:
                movimentobispo(0, 10, "Baixo", "Esquerda");
                    break;
                case 4:
                movimentobispo(0, 10, "Baixo", "Direita");
                    break;
                default:
                    printf("Movimento inválido!\n");
            }
            break;

        case 3: //RAINHA
            printf(" * RAINHA *\n");
            printf("1. Direita \n");
            printf("2. Esquerda \n"); 
            printf("3. Cima \n");
            printf("4. Baixo \n"); 
            printf("Movimento: ");
            scanf("%d", &movimento);
            switch (movimento) {
                case 1:
                movimentorainha("Esquerda", 5);
                    break;
                case 2:
                movimentorainha("Direita", 5);
                    break;
                case 3:
                movimentorainha("Cima", 5);
                    break;
                case 4:
                movimentorainha("Baixo", 5);
                    break;
                default:
                    printf("Movimento inválido!\n");
            }
            break;

        case 4: //CAVALO
            printf(" * CAVALO *\n");
            printf("1. Cima (2x) -> Direita\n");
            printf("2. Cima (2x) -> Esquerda\n");
            printf("3. Baixo (2x) -> Direita\n");
            printf("4. Baixo (2x) -> Esquerda\n");
            printf("5. Direita (2x) -> Cima\n");
            printf("6. Direita (2x) -> Baixo\n");
            printf("7. Esquerda (2x) -> Cima\n");
            printf("8. Esquerda (2x) -> Baixo\n");
            printf("Movimento: ");
            scanf("%d", &movimento);
            switch (movimento) {
                case 1:
                movimentocavalo("Cima", "Direita", 2);
                    break;
                case 2:
                movimentocavalo("Cima", "Esquerda", 2);
                    break;
                case 3:
                movimentocavalo("Baixo", "Direita", 2);
                    break;
                case 4:
                movimentocavalo("Baixo", "Esquerda", 2);
                    break;
                case 5:
                movimentocavalo("Direita", "Cima", 2);
                    break;
                case 6:
                movimentocavalo("Direita", "Baixo", 2);
                    break;
                case 7:
                movimentocavalo("Esquerda", "Cima", 2);
                    break;
                case 8:
                movimentocavalo("Esquerda", "Baixo", 2);
                    break;
                default:
                    printf("Movimento inválido!\n");
            }
            break;

        default:
            printf("Peça inválida!\n");
    }

//Karol Botelho    
return 0;
}
