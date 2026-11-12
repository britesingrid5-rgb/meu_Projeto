//Aqui no livro.h fica a funções com os parâmetros para o programa entender que as funções existem.

#ifndef LIVRO_H
#define LIVRO_H

struct livro{//Declaração do struct.
     int id;
     char titulo[100];
     char autor[100];
     int ano;
     char categoria[50];

     }livro;

void dadosLivro(struct livro l1);//Declaração da função.

#endif