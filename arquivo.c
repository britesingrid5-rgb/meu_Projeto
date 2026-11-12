//Aqui no arquivo.c fica as funções com os parâmetros e a execução do programa.

#include "arquivo.h"//Aqui no arquivo.c está chamando o arquivo.h
#include <stdio.h>

  struct livro l1;
  struct livro vetor[10];   

//Instanciando a função.
void salvarDadosTxt(struct livro l1, struct livro veto[10]){

    FILE *livros;//Declarando o arquivo livros.

    if(fgets(l1.titulo, sizeof(l1.titulo), stdin)){//Leitura dos dados do livro l1.
       fprintf(livros, "\nTitulo do livro: %s", l1.titulo); 
    }

    if(fgets(l1.autor, sizeof(l1.autor), stdin)){
       fprintf(livros, "\nAutor do livro: %s", l1.autor); 
    }

    if(fgets(l1.categoria, sizeof(l1.categoria), stdin)){
       fprintf(livros, "\nCategoria do livro: %s", l1.categoria); 
    }

    if(scanf("%d", &l1.id)){
       fprintf(livros, "\nID do livro: %d", l1.id);
    }

    if(scanf("%d", &l1.ano)){//Término da leitura.
       fprintf(livros, "\nAno de publicacao do livro: %d", l1.ano);
    }

    for(int i = 0; i < 10; i++){
        if(scanf("%d", &vetor[i].id)){//Leitura dos dados dos livros vetor.
           fprintf(livros, "%d", vetor[i].id);
        }

        if(fgets(vetor[i].titulo, sizeof(vetor[i].titulo), stdin)){
           fprintf(livros, "%s", vetor[i].titulo); 
        }

        if(fgets(vetor[i].autor, sizeof(vetor[i].autor), stdin)){
           fprintf(livros, "%s", vetor[i].autor); 
        }

        if(scanf("%d", &vetor[i].ano)){
           fprintf(livros, "%d", vetor[i].ano); 
        }

        if(fgets(vetor[i].categoria, sizeof(vetor[i].categoria), stdin)){//Término da leitura.
           fprintf(livros, "%s", vetor[i].categoria); 
        }
    }
}
