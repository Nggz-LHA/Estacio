#include <stdio.h>

int main() {
    // Torre
   
    int movimentoTorre = 5;
    printf("Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");
 
    // Bispo
    int movimentoBispo = 5;
    int contadorBispo = 0;
    printf("Bispo:\n");
    while (contadorBispo < movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // Rainha
    
    int movimentoRainha = 8;
    int contadorRainha = 0;
    printf("Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentoRainha);

    return 0;
}
