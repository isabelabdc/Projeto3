#include <stdlib.h>
#include <stdio.h>
#include <time.h>  //biblioteca para sortear numeros aleatorios;

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

//sorteia 3 navios aleatoriamente:
void posicionarNavios(int tabuleiro[5][5]){
    srand(time(NULL));
    int navios=0;
    while (navios<3){
        int x = rand()%5;  //sorteia o x;
        int y= rand()%5;  //sorteia o y;
        if(tabuleiro[x][y]==1){  //apenas marca a posicao se a mesma estiver livre (se for agua);
            tabuleiro[x][y]=9;  // "9" representa um navio oculto;
            navios++;
        }
    }
}
