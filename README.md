# Projeto3
Projeto 3 -- Desenvolvimento de Algoritmos

Isabela Bonoto de Castro
R.A:  24.224.008-3;

Gustavo Runge Passarelli
R.A:  52.224.004-3;

Objetivo:

O jogo desenvolvido tem como objetivo simular uma versão simplificada de Batalha Naval, onde o jogador deve encontrar e 
destruir três navios escondidos em um tabuleiro 5x5. Cada partida é iniciada com os navios posicionados aleatoriamente no 
tabuleiro, e o jogador deve tentar acertar suas localizações por meio de coordenadas numéricas. A cada rodada, o usuário 
informa a linha e a coluna onde deseja atirar, e o programa responde se houve acerto, erro ou se a coordenada já foi 
utilizada anteriormente. O jogo também pode fornecer dicas sobre a quantidade de navios existentes na linha ou coluna 
escolhida. O progresso da partida é visualizado por meio das marcações no tabuleiro: 

-- '~' representa água;

-- 'X' representa um acerto;

-- '*' representa um erro;


Esses símbolos permitem o acompanhamento dos resultados dos disparos
ao longo das tentativas. O objetivo final é destruir
todos os navios no menor número possível de jogadas.


Forma de compilação:

Para compilar e executar o código no Windows, foi feito o download do
MinGW-w64, que permite compilar programas em C usando o GCC. Após
fazer o download e devidas configurações no sistema, abra o
prompt de comando ou terminal no diretório do projeto e digite o 
seguinte comando:

"gcc main.c -o arquivo"

Esse comando irá gerar um arquivo executável chamado "arquivo.exe",
para executá-lo, digite no terminal:

"arquivo.exe"

O programa será iniciado e estará pronto para uso.
No Linux, a compilação pode ser feita com o mesmo comando. Para 
executar o programa, utilize: "./arquivo"
