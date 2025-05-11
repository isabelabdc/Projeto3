#include <stdlib.h>
#include <stdio.h>

//tabuleiro inicial:
void iniciarTabuleiro(int tabuleiro[5][5]){ 
    for (int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            tabuleiro[i][j]=1;  // "1" indica agua;
        }
    }
}