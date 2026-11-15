//Aqui no main.c é o menu principal onde fica o console e as variáveis declaradas.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "livro.h"//Aqui está obtendo tanto o livro.c, quanto o livro.h para poder fazer a execução do programa.
#include "vetor.h"//Aqui está obtendo tanto o vetor.c, quanto o vetor.h para poder fazer a execução do programa.
#include "arquivo.h"//Aqui está obtendo tanto o arquivo.c, quanto o arquivo.h para poder fazer a execução do programa.

int main(){

   struct livro vetor[10];//Aqui está declarando o vetor com o tamanho 10.

   alocarVetor(vetor);//Aqui está chamando a função "alocarVetor" com o parâmetro vetor para o menu principal obter a execução da função. O nome da função para chamar a função que está fazendo a execução do programa e o parâmetro como ligação da função para o programa permitir que a função faça a execução devidamente. Que seria alocar o vetor com o uso do malloc.

   free(vetor);//Aqui está sendo liberado com o uso do free o que foi usado pela alocação do vetor. Um novo espaço de memória que foi reservado e alocado um novo endereço de memória no vetor com o uso do malloc.

   realocarVetor(vetor);//Aqui está chamando a função "realocarVetor" com o parâmetro vetor para o menu principal obter a execução da função. O nome da função para chamar a função que está fazendo a execução do programa e o parâmetro como ligação da função para o programa permitir que a função faça a execução devidamente. Que seria realocar o vetor: adicioar mais um espaço de memória e aloca mais endereço de memória no vetor com o uso do realloc, que serve tanto para aumentar, quanto para diminuir o espaço de memória de um inteiro. 

   int opcao;//Declarando a variável opção do tipo(int).

      //Iniciando o menu.
      printf("\n--------Menu-------");
      printf("\n1:Cadastrar livro.");
      printf("\n2:listar todos os livros.");
      printf("\n3:Buscar livros.");
      printf("\n4:Remover livros por id.");
      printf("\n5:Salvar dados em arquivo texto.(livro.txt).");
      printf("\n6:Salvar dados em arquivo binario.(livro.dat).");
      printf("\n7:Carregar dados de arquivo ao iniciar.");
      printf("\n8:Gerar relatorios.");
      printf("\n9:Sair.");
      scanf("%d", &opcao);//Leitura do menu.
   
      //Instanciando o menu.
      while(opcao != 9){///O uso do while para o menu continuar executando até chegar na opção 9: Sair.
      switch(opcao){
         case 1:
         cadastrarLivro(vetor);//Função cadastrar livro do vetor.
         break;
         
         case 2:
         listarLivros(vetor);//Função listar livros do vetor.
         break;
      
         case 3:
         buscarLivros(vetor);//Função buscar livros do vetor.
         break;

         case 4:
         removerLivroID(vetor);//Função remover livros do vetor.
         break;
     
         case 5:
         salvarDadosTxt(vetor);//Função salvar dados dos livros do vetor em arquivo.txt.
         break;

         case 6:
         salvarDadosDat(vetor);//Função salvar dados dos livros do vetor em arquivo binário.
         break;

         case 7:
         LerArquivoSalvo(vetor);//Função ler o os dados do arquivo salvo.
         break;

         case 8:
         gerarRelatorios(vetor);//Função gerar relatórios do vetor.
         break;

         case 9:
         Printf("\nDeseja salvar as alteracoes antes de encerrar o sistema e liberar a memoria utilizada.");
         break;
        }
        opcao++;
      }     
   return 1;//Encerramento do programa.
   }
   //Obs: 6. Entregáveis

   //Código-fonte completo, organizado em pastas (ex.: src/, include/).

   //Makefile (obrigatório).

   //Arquivo de texto explicando como compilar e executar.

   //Arquivo de teste (obrigatório): um arquivo livros.txt contendo pelo menos 5 livros.

