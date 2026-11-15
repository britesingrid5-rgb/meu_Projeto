#ifndef ARQUIVO_H
#define ARQUIVO_H
#include "livro.h"//Aqui no arquivo.h está chamando o vetor.h
//Aqui no arquivo.h fica as funções e os parâmetros para o programa entender que a função existe.    

void salvarDadosTxt(struct livro vetor[]);//Declaração da função.
void salvarDadosDat(struct livro vetor[]);//Declaração da função.
void LerArquivoSalvo(struct livro vetor[]);//Declaração da função.

#endif