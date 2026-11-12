//Aqui no vetor.h está as funções e os parâmetros para o programa entender que as funções existem.

#ifndef VETOR_H
#define VETOR_H

 struct livro{//Declaração do struct.
     int id;
     char titulo[100];
     char autor[100];
     int ano;
     char categoria[50];

     }livro;

void alocarVetor(struct livro **vetor);//Declaração da função.
void realocarVetor(struct livro **vetor);//Declaração da função.
void listarLivros(struct livro vetor[10]);//Declaração da função.
void buscarLivros(struct livro vetor[10]);//Declaração da função.
void removerLivroID(struct livro vetor[10]);//Declaração da função.
int gerarRelatorios(struct livro vetor[10]);//Declaração da função.
#endif

