//Aqui no vetor.c fica a execução do programa com as funções e os parâmetros.

#include "vetor.h"//Aqui no vetor.c está chamando o vetor.h 
#include <stdio.h>

//Instanciando as funções.
void alocarVetor(struct livro **vetor){//Aqui é a função de alocar o vetor com o ponteiro duplo, pois o ponteiro duplo está apontando para o endereço de memoria do ponteiro simples que aponta para o próprio vetor. O uso do ponteiro duplo no parâmetro porque é no ponteiro simples que o programa deve mexer.

    *vetor = malloc(10 * sizeof(int));//Aqui está reservando um novo espaço de memória e alocando um novo endereço de memória no ponteiro simples que aponta para o vetor original com o uso do malloc.
}

void realocarVetor(struct livro **vetor){//Aqui é a função de realocar o vetor com o uso do ponteiro duplo. O uso do ponteiro duplo no parâmetro porque é no ponteiro simples que o programa deve mexer.

    *vetor = realloc(20 * sizeof(int));//Aqui está adicionando um espaço de memória e alocando no ponteiro simples que está pontando para o vetor original com o uso do realloc. Está sendo usado o realloc porque o realloc aumenta e diminui o espaço de endereço de memória de um inteiro.
}

void cadastrarLivro(struct livro vetor[10]){//Aqui é a função de cadastrar dados do vetor livro.

    for(int i = 0; i < 10; i++){//O uso porque são os mesmos dados correspondente para vários livros do vetor.
        scanf("%d", &vetor[i].id);//Aqui é a leitura dos dados do vetor de livros.
        fgets(vetor[i].titulo, sizeof(vetor[i].titulo), stdin);
        fgets(vetor[i].autor, sizeof(vetor[i].autor), stdin);
        scanf("%d", &vetor[i].ano);
        fgets(vetor[i].categoria, sizeof(vetor[i].categoria), stdin);
    }//Aqui termina a leitura do dados.

    for(int i = 0; i < 10; i++){

        if(vetor[i].id == vetor[i].id){//Aqui está verificando se há a existência de IDs iguais.
            printf("\nHa existencia de IDs iguais.");
        } else {
            printf("\nNao ha existencia de IDs iguais."); 
        }
    }
}

void listarLivros(struct livro vetor[10]){

    int ano1 = 0, ano2 = 0;//Aqui está sendo declarado os anos de publicação dos livros.

    printf("\nInforme o ano de publicação do primeiro livro: ");
    scanf("%d", &ano1);//Aqui estou informando o ano do primeiro livro.

    printf("\nInforme o ano de publicação do segundo livro: ");
    scanf("%d", &ano2);//Aqui estou informando o ano do segundo livro.

    for(int i = 0; i < 10; i++){
        if(ano1 == vetor[i].id && vetor[i].id == 1){//Aqui está sendo verificado se o ano1 é igual ao ano de publicação do primeiro livro do vetor. 
           printf("\nLivro 1: %s %s %d %s", vetor[i].titulo, vetor[i].autor, vetor[i].ano, vetor[i].categoria);//Aqui está sendo listado todos os dados do primeiro livro do vetor.
        }

        if(ano2 == vetor[i].id && vetor[i].id == 2){//Aqui está sendo verificado se o ano2 é igual ao ano de publicação do segundo livro do vetor.
           printf("\nLivro 2: %s %s %d %s", vetor[i].titulo, vetor[i].autor, vetor[i].ano, vetor[i].categoria);//Aqui está sendo listado todos os dados do segundo livro do vetor.
        }
    }//Aqui está fechando o loop.
}

void buscarLivros(struct livro vetor[10]){

    int valor = 0;//Aqui está sendo declarado o valor para ser escolhido um dos livros do vetor.

    printf("\nInforme um valor entre 0 e 1: ");//Aqui está pedindo um valor entre 0 e 1.
    scanf("%d", &valor);//Aqui está lendo o valor que foi escolhido.

    for(int i = 0; i < 10; i++){

        if(valor > -1 && valor < 1){//Aqui no primeiro if está verificando se o valor é 0, ou seja, se for maior que -1 e menor que 1.
            if(vetor[i].id == 1){//Aqui no segundo if está comparando se o vetor[i].id é igual a 1, que indica o primeiro livro do vetor que foi escolhido.
               printf("\nLivro 1: %s %d %s", vetor[i].titulo, vetor[i].ano, vetor[i].categoria);//Aqui está imprimindo os dados do primeiro livro do vetor que foi escolhido. Os dados: título do livro, ano de publicação e a categoria (gênero). 
            }//Aqui termina o primeiro comando.
        } else if(valor > 0 && valor < 2){//Aqui entra o segundo comando com o else if, verificando se o valor é 1, ou seja, se for maior que 0 e menor que 2.
            if(vetor[i].id == 2){//Aqui no segundo if do segundo comando está comparando se o vetor[i].id é igual a 2, que indica o segundo livro do vetor que foi escolhido. Os dados: título do livro, ano de publicação e a categoria (gênero).
               printf("\nLivro 2: %s %d %s", vetor[i].titulo, vetor[i].ano, vetor[i].categoria);
            }//Aqui termina o segundo comando.
        } else {//Aqui está dizendo: Se não for nenhuma das opções acima, então...
            printf("\nNehuma das opcoes.");//A conclusão é essa.
        }//Aqui termina os comandos.
    }//Aqui encerra o loop.
}

void removerLivroID(struct livro vetor[10]){

    int id;

    for(int i = 0; i < 10; i++){

        if(vetor[i].id == 1){
          vetor[i].id = NULL;
        } else if(vetor[i].id = 2){
         vetor[i].id = NULL;
        } else {
            printf("\nNenhuma das opcoes.");
        }
    }

    for(int i = 0; i < 1; i++){
        printf("\nRemover livro 1: %d", vetor[i].id);
    }

    for(int i = 0; i < 1; i++){
        printf("\nRemover livro 2: %d", vetor[i].id);
    }
}

int gerarRelatorios(struct livro vetor[10]){

    int soma = 0;

    for(int i = 0; i < 10; i++){
        
        soma+=vetor[i].id - 1;
    }

    return soma;

    int contador = 0;

    for(int i = 0; i < 10; i++){
        vetor[i].categoria;
           contador++;
    }

    return contador;

    for(int i = 0; i < 10; i++){

        int maior = 0;
        int menor = 0;

        if(vetor[i].ano > maior){
           maior = vetor[i].ano;
        }

        vetor[i].ano = maior;

        if(vetor[i].ano < menor){
           menor = vetor[i].ano; 
        }
        vetor[i].ano = menor;
    }

    for(int i = 0; i < 1; i++){
        printf("\nLivro mais recente e o mais antigo: %d %d", vetor[i].ano, vetor[i].ano);
    }

}
