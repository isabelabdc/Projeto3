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

//funcao de atirar e checar o tiro:
int atirar(int tiro[2], int tabuleiro[5][5]){
    //le a linha digitada:
    printf("Linha: ");
    scanf("%d", &tiro[0]);
    tiro[0]--;
    int linha=tiro[0];
    //le a coluna digitada:
    printf("Coluna: ");
    scanf("%d", &tiro[1]);
    tiro[1]--;
    int coluna=tiro[1];

    //checa o tiro:
    if(linha<0||linha>=5||coluna<0||coluna>=5){
        return -1;  //retorno caso a coordenada seja invalida;
    } else if(tabuleiro[linha][coluna]==9){
        tabuleiro[linha][coluna]=2;  //atualiza o tabuleiro;
        return 2;  //retorno em caso de acerto;
    } else if(tabuleiro[linha][coluna]==1){
        tabuleiro[linha][coluna]=0;  //atualiza o tabuleiro;
        return 0;  //retorno em caso de erro;
    } else{
        return 1;  //retorno em caso de coordenada repetida;
    }
}

//funcao para as dicas:
int dica(int tiro[2], int tabuleiro[5][5]){
    int linha=tiro[0];
    int coluna=tiro[1];
    int naviosNaLinha=0;
    int naviosNaColuna=0;
    //checa se ha navios na mesma coluna do ultimo tiro:
    for(int i=0; i<5; i++){
        if (tabuleiro[i][coluna]==9){
            naviosNaColuna++;
        }
    }
    //checa se ha navios na mesma linha do ultimo tiro:
    for(int j=0; j<5; j++){
        if (tabuleiro[linha][j]==9){
            naviosNaLinha++;
        }
    }

    if(naviosNaLinha==0 && naviosNaColuna==0){  
        return 0;
    }else if (naviosNaLinha>0 && naviosNaColuna>0){
        printf("DICA: Ha %d navio(s) na mesma linha e %d navio(s) na mesma coluna! :)\n", naviosNaLinha , naviosNaColuna);
    } else if (naviosNaLinha>0 && naviosNaColuna==0){
        printf("DICA: Ha %d navio(s) na mesma linha. :)\n", naviosNaLinha);
    } else if (naviosNaLinha==0 && naviosNaColuna>0){
        printf("DICA: Ha %d navio(s) na mesma coluna. :)\n", naviosNaColuna);
    }
}