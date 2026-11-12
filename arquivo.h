#ifndef ARQUIVO_H
#define ARQUIVO_H
#include "livro.h"//Aqui no arquivo.h está chamando o livro.h
#include "vetor.h"//Aqui no arquivo.h está chamando o vetor.h
//Aqui no arquivo.h fica as funções e os parâmetros para o programa entender que a função existe.

  struct livro l1;
  struct livro vetor[10];     

void salvarDadosTxt(struct livro l1, struct livro veto[10]);//Declaração da função.

#endif