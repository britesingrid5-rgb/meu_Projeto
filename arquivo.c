//Aqui no arquivo.c fica as funções com os parâmetros e a execução do programa.

#include "arquivo.h"//Aqui no arquivo.c está chamando o arquivo.h
#include <stdio.h>

  struct livro vetor[];   

//Instanciando a função.
void salvarDadosTxt(struct livro veto[10]){

    FILE *livros;//Declarando o arquivo livros.

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

    fclose(livros);//Fechando o arquivo livros.
}
