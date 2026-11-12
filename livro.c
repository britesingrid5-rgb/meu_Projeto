//Aqui no livro.c fica a execução do programa, as funções e os parâmetros.

#include "livro.h"//Aqui no livro.c está chamando o livro.h.
#include <string.h>
#include <stdio.h>

void dadosLivro(struct livro l1){

    l1;//Aqui está armazenando os dados do livro l1 que foi declarado como parâmetro.
    strcpy(l1.titulo, "A cinco passos de você");
    strcpy(l1.autor, "Rachael Lippincott");
    strcpy(l1.categoria, "romance e drama");
    (l1.id = 1);
    (l1.ano = 2019);//Aqui está finalizando os dados armazenados do livro l1.

    fgets(l1.titulo, sizeof(l1.titulo), stdin);//Aqui está lendo os dados armazenados do livro l1 pelo uso do struct.
    fgets(l1.autor, sizeof(l1.autor), stdin);
    fgets(l1.categoria, sizeof(l1.categoria), stdin);
    scanf("%d", &l1.id);
    scanf("%d", &l1.ano);//Aqui termina a leitura dos dados.

    printf("\nTitulo do livro: %s", l1.titulo);//Aqui está imprindo os dados do livro l1.
    printf("\nAutor do livro: %s", l1.autor);
    printf("\nCategoria do livro: %s", l1.categoria);
    printf("\nID do livro: %d", l1.id);
    printf("\nAno de publicacao do livro: %d", l1.ano);//Aqui é a finalização dos dados do livro l1.
}  


    
