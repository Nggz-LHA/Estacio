#include <stdio.h>


void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}


void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}


void moverBispoComLoops(int casas) {
    printf("Bispo com loops aninhados:\n");
    for (int i = 0; i < casas; i++) { 
        for (int j = 0; j < casas; j++) { 
            if (i == j) {
                printf("Diagonal Inferior Direita\n");
            }
        }
    }
    printf("\n");
}


void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


void moverCavalo() {
    printf("Cavalo:\n");

    for (int i = 0; i < 3; i++) {  
        for (int j = 0; j < 2; j++) {  

            if (i != 2 && j != 1) {
                continue; 
            }

            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break; 
            }
        }
    }

    printf("\n");
}

int main() {
    

    printf("Torre:\n");
    int movimentoTorre = 5;
    moverTorre(movimentoTorre);
    printf("\n");


    printf("Bispo (recursivo):\n");
    int movimentoBispo = 5;
    moverBispoRecursivo(movimentoBispo);
    printf("\n");

    
    moverBispoComLoops(movimentoBispo);

 
    printf("Rainha:\n");
    int movimentoRainha = 8;
    moverRainha(movimentoRainha);
    printf("\n");


    moverCavalo();

    return 0;
}
