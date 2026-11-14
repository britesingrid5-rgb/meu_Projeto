//Aqui no arquivo.c fica as funções com os parâmetros e a execução do programa.

#include "arquivo.h"//Aqui no arquivo.c está chamando o arquivo.h
#include <stdio.h>

  struct livro vetor[];   

//Instanciando a função: salvarDadosTxt(Texto).
void salvarDadosTxt(struct livro veto[]){

    FILE *livros;//Declarando o arquivo livros.

    livros = fopen("livros.txt", "w");//Aqui está abrindo o arquivo livros com o uso do fopen.

   if(livros == NULL){//Verificando se é possível editar o arquivo com o comando if.
      printf("\nErro. Nao foi possivel editar o arquivo livros txt.");
      return 1;//Se não foi possível, encarra o programa.
   }

    for(int i = 0; i < 40; i++){
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

//Instanciando a função: salvarDadosDat(binário).
void salvarDadosDat(struct livro vetor[]){

}

//Instanciando a função: lerArquivoSalvo(Txt).
void LerArquivoSalvo(struct livro vetor[]){

   FILE *livros;//Declarando o arquivo livros.

    livros = fopen("livros.txt", "w");//Aqui está abrindo o arquivo livros com o uso do fopen.

   if(livros == NULL){//Verificando se é possível editar o arquivo com o comando if.
      printf("\nErro. Nao foi possivel editar o arquivo livros txt.");
      return 1;//Se não foi possível, encarra o programa.
   }

   for(int i = 0; i < 40; i++){
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

    fclose(livros);//Fechando o arquivo.
}