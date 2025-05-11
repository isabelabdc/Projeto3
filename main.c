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

//imprimir o tabuleiro:
void exibirTabuleiro(int tabuleiro[5][5]){ 
    printf("\n\t");
    for (int i=0; i<5; i++){
        printf("\t%d", i+1);  //imprime coordenadas;
    }
    printf("\n");
    for (int i=0; i<5; i++){
        printf("\t%d", i+1);  //imprime coordenadas; 
        for(int j=0; j<5; j++){
            if(tabuleiro[i][j]==1 || tabuleiro[i][j]==9){
                printf("\t~"); //agua;
            }else if(tabuleiro[i][j]==2){
                printf("\tX"); //acertou uma embarcacao;
            }else if(tabuleiro[i][j]==0){
                printf("\t*"); //nao acertou nenhuma embarcacao;
            }
        }
        printf("\n");
    }
}