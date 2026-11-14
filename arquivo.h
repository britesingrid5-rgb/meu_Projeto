#ifndef ARQUIVO_H
#define ARQUIVO_H
#include "vetor.h"//Aqui no arquivo.h está chamando o vetor.h
//Aqui no arquivo.h fica as funções e os parâmetros para o programa entender que a função existe.    

 struct livro{//Declaração do struct.
     int id;
     char titulo[100];
     char autor[100];
     int ano;
     char categoria[50];

     }livro;

struct livro vetor[50];

void salvarDadosTxt(struct livro vetor[]);//Declaração da função.

#endif