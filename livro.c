//Aqui no livro.c fica a execução do programa, as funções e os parâmetros.

#include "livro.h"//Aqui no livro.c está chamando o livro.h.
#include <string.h>
#include <stdio.h>

void dadosLivro(struct livro l1){

    for(int i = 0; i < 5; i++){
       printf("\nInforme o titulo do livro l1: "); 
       fgets(l1.titulo, sizeof(l1.titulo), stdin);//Aqui está lendo os dados armazenados do livro l1 pelo uso do struct.
       
       printf("\nInforme o autor do livro l1: ");
       fgets(l1.autor, sizeof(l1.autor), stdin);
      
       printf("\nInforme a categoria do livro l1: ");
       fgets(l1.categoria, sizeof(l1.categoria), stdin);
       
       printf("\nInforme o id do livro l1: ");
       scanf("%d", &l1.id);
       
       printf("\nInforme o ano do livro l1: ");
       scanf("%d", &l1.ano);//Aqui termina a leitura dos dados.
    }

    printf("\nTitulo do livro: %s", l1.titulo);//Aqui está imprindo os dados do livro l1.
    printf("\nAutor do livro: %s", l1.autor);
    printf("\nCategoria do livro: %s", l1.categoria);
    printf("\nID do livro: %d", l1.id);
    printf("\nAno de publicacao do livro: %d", l1.ano);//Aqui é a finalização dos dados do livro l1.
}