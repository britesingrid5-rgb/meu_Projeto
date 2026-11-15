//Aqui no vetor.h está as funções e os parâmetros para o programa entender que as funções existem.

#ifndef VETOR_H
#define VETOR_H
#include "livro.h"

void alocarVetor(struct livro **vetor);//Declaração da função: alocar vetor.
void realocarVetor(struct livro **vetor);//Declaração da função: realocar vetor.
void listarLivros(struct livro vetor[]);//Declaração da função: listar livros.
void buscarLivros(struct livro vetor[]);//Declaração da função: buscar livros.
void removerLivroID(struct livro vetor[]);//Declaração da função: remover livros.
void gerarRelatorios(struct livro vetor[]);//Declaração da função: gerar relatórios.
#endif