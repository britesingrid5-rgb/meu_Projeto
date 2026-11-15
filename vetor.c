//Aqui no vetor.c fica a execução do programa com as funções e os parâmetros.

#include "vetor.h"//Aqui no vetor.c está chamando o vetor.h 
#include <stdio.h>

//Instanciando as funções.
void alocarVetor(struct livro **vetor){//Aqui é a função de alocar o vetor com o ponteiro duplo, pois o ponteiro duplo está apontando para o endereço de memoria do ponteiro simples que aponta para o próprio vetor. O uso do ponteiro duplo no parâmetro porque é no ponteiro simples que o programa deve mexer.

    *vetor = malloc(10 * sizeof(struct livro));//Aqui está reservando um novo espaço de memória e alocando um novo endereço de memória no ponteiro simples que aponta para o vetor original com o uso do malloc.
}

void realocarVetor(struct livro **vetor){//Aqui é a função de realocar o vetor com o uso do ponteiro duplo. O uso do ponteiro duplo no parâmetro porque é no ponteiro simples que o programa deve mexer.

    *vetor = realloc(30 * sizeof(struct livro));//Aqui está adicionando um espaço de memória e alocando no ponteiro simples que está pontando para o vetor original com o uso do realloc. Está sendo usado o realloc porque o realloc aumenta e diminui o espaço de endereço de memória de um inteiro.
}

void cadastrarLivro(struct livro vetor[]){//Aqui é a função de cadastrar dados do vetor livro.

    for(int i = 0; i < 40; i++){//O uso porque são os mesmos dados correspondente para vários livros do vetor.
        printf("\nInforme o id do livro do vetor: ");
        scanf("%d", &vetor[i].id);//Aqui é a leitura dos dados do vetor de livros.
        
        printf("\nInforme o titulo do livro do vetor: ");
        fgets(vetor[i].titulo, sizeof(vetor[i].titulo), stdin);
        
        printf("\nInforme o autor do livro do vetor: ");
        fgets(vetor[i].autor, sizeof(vetor[i].autor), stdin);
        
        printf("\nInforme o ano do livro do vetor: ");
        scanf("%d", &vetor[i].ano);
        
        printf("\nInforme a categoria do livro do vetor: ");
        fgets(vetor[i].categoria, sizeof(vetor[i].categoria), stdin);//Aqui termina a leitura do dados.
    }

    for(int i = 0; i < 40; i++){

        if(vetor[i].id == 1 && vetor[i].id == 2 && vetor[i].id == 3 && vetor[i].id == 4 && vetor[i].id == 5){//Aqui está verificando se há a existência de IDs iguais.
           if(vetor[i].id == vetor[i].id){
              printf("\nHá existencia de IDs iguais.");
           } else {
              printf("\nNão há erros de IDs.");
           }
        }
    }
 
}

void listarLivros(struct livro vetor[]){

    int ano[40];

    for(int i = 0; i < 40; i++){
        printf("\nInforme o ano do livro [%d]: ");
        scanf("%d", &ano[i]);
    }

    for(int i = 0; i < 40; i++){
        if(ano[i] == vetor[i].ano && vetor[i].id == 1){//Aqui está verificando se o ano[i] é correspondente ao vetor[i].ano do primeiro livro do vetor.
           printf("\nLivro 1: %s %s %d %s", vetor[i].titulo, vetor[i].autor, vetor[i].ano, vetor[i].categoria);//Aqui está sendo listado todos os dados do primeiro livro do vetor.
        }

        if(ano[i] == vetor[i].ano && vetor[i].id == 2){//Aqui está verificando se o ano[i] é correspondente ao vetor[i].ano do segundo livro do vetor.
           printf("\nLivro 2: %s %s %d %s", vetor[i].titulo, vetor[i].autor, vetor[i].ano, vetor[i].categoria);//Aqui está sendo listado todos os dados do segundo livro do vetor.
        }

        if(ano[i] == vetor[i].ano && vetor[i].id == 3){//Aqui está verificando se o ano[i] é correspondente ao vetor[i].ano do terceiro livro do vetor.
           printf("\nLivro 3: %s %s %d %s", vetor[i].titulo, vetor[i].autor, vetor[i].ano, vetor[i].categoria);//Aqui está sendo listado todos os dados do terceiro livro do vetor.
        }

        if(ano[i] == vetor[i].ano && vetor[i].id == 4){//Aqui está verificando se o ano[i] é correspondente ao vetor[i].ano do quarto livro do vetor.
           printf("\nLivro 4: %s %s %s %s", vetor[i].titulo, vetor[i].autor, vetor[i].ano, vetor[i].categoria);//Aqui está sendo listado todos os dados do quarto livro do vetor.
        }

        if(ano[i] == vetor[i].ano && vetor[i].id == 5){//Aqui está verificando se o ano[i] é correspondente ao vetor[i].ano do quinto livro do vetor.
           printf("\nLivro 5: %s %s %d %s", vetor[i].titulo, vetor[i].autor, vetor[i].ano, vetor[i].categoria);//Aqui está sendo listado todos os dados do quinto livro do vetor.
        } 
        }
    }//Aqui está fechando o loop.

void buscarLivros(struct livro vetor[]){

    int valor = 0;//Aqui está sendo declarado o valor para ser escolhido um dos livros do vetor.

    printf("\nInforme um valor entre 1 a 5: ");//Aqui está pedindo um valor entre 0 e 1.
    scanf("%d", &valor);//Aqui está lendo o valor que foi escolhido.

    for(int i = 0; i < 40; i++){

        if(valor > 0 && valor < 2){//Aqui no primeiro if está verificando se o valor é 1, ou seja, se for maior que 0 e menor que 2.
            if(vetor[i].id == 1){//Aqui no segundo if está comparando se o vetor[i].id é igual a 1, que indica o primeiro livro do vetor que foi escolhido.
               printf("\nLivro 1: %s %d %s", vetor[i].titulo, vetor[i].ano, vetor[i].categoria);//Aqui está imprimindo os dados do primeiro livro do vetor que foi escolhido. Os dados: título do livro, ano de publicação e a categoria (gênero). 
            }//Aqui termina o primeiro comando.
        } else if(valor > 1 && valor < 3){//Aqui entra o segundo comando com o else if, verificando se o valor é 2, ou seja, se for maior que 1 e menor que 3.
            if(vetor[i].id == 2){//Aqui no segundo if do segundo comando está comparando se o vetor[i].id é igual a 2, que indica o segundo livro do vetor que foi escolhido. Os dados: título do livro, ano de publicação e a categoria (gênero).
               printf("\nLivro 2: %s %d %s", vetor[i].titulo, vetor[i].ano, vetor[i].categoria);
            }//Aqui termina o segundo comando.
        } else if(valor > 2 && valor < 4){//Aqui entra o terceitro comando com o else if, verificando se o valor é 3, ou seja, se for maior que 2 e menor que 4.
            if(vetor[i].id == 3){//Aqui no segundo if do terceiro comando está comparando se o vetor[i].id é igual a 3, que indica o terceiro livro do vetor que for escolhido. Os dados: título do livro, ano de publicação e a categoria (gênero).
                printf("\nLivro 3: %s %d %s", vetor[i].titulo, vetor[i].ano, vetor[i].categoria);
            }//Aqui termina o terceiro comando.
        } else if(valor > 3 && valor < 5){//Aqui entra o quarto comando com o else if, verificando se o valor é 4, ou seja, se for maior que 3 e menor que 5.
            if(vetor[i].id == 4){//Aqui no segundo if do quarto comando está comparando se o vetor[i].id é igual a 4, que indica o quarto livro do vetor que for escolhido. Os dados: título do livro, ano de publicação e a categoria (gênero).
                printf("\nLivro 4: %s %d %s", vetor[i].titulo, vetor[i].ano, vetor[i].categoria);
            }//Aqui termina o quarto comando.
        } else if(valor > 4 && valor < 6){//Aqui entra o quinto comando com o else if, verificando se o valor é 5, ou seja, se for maior que 4 e menor que 6.
            if(vetor[i].id == 5){//Aqui no segundo if do quinto comando está comparando se o vetor[i].id é igual a 5, que indica o quinto livro do vetor que for escolhido. Os dados: título do livro, ano de publicação e a categoria (gênero).
                printf("\nLivro 5: %s %d %s", vetor[i].titulo, vetor[i].ano, vetor[i].categoria);
            }
        } else {
            printf("\nNenhuma das opcoes.");
        }
    }
}

void removerLivroID(struct livro vetor[]){

    int id;//Declarando a variável id.

    printf("\nInforme o id de um livro: ");//Aqui está pedindo para informar o id de um livro.
    scanf("%d", &id);//Leitura do id.

    for(int i = 0; i < 40; i++){

        if(id == vetor[i].id && vetor[i].id == 1 || id == vetor[i].id && vetor[i].id == 2 || id == vetor[i].id && vetor[i].id == 3 || id == vetor[i].id && vetor[i].id == 4 || id == vetor[i].id && vetor[i].id == 5){//Aqui está verificando qual dos IDs serão removidos.
                                                    vetor[i].id = 0;
        } else {
            printf("\nNenhuma das opcoes.");
        }
    }

    for(int i = 0; i < 1; i++){
        printf("\nRemover livro: %d", vetor[i].id);//Aqui imprimi o id removido.
    }
}

void gerarRelatorios(struct livro vetor[]){

    int qtde = 0;//Aqui é a declaração da variável qtde.

    for(int i = 0; i < 50; i++){
           vetor[i].id;
             qtde++;//Aqui está contando a quantidade total dos livros pelo id.
    }
    
    printf("Total de livros: %d", qtde);//Imprimindo a quantidade total dos livros pelo id.

    int contador = 0;//Declarando a variável contador.

    for(int i = 0; i < 50; i++){
        vetor[i].categoria;
           contador++;//Aqui está contando a quantidade dos livros por categoria.
    }

    printf("\nTotal de livros por categorias: %d", contador);//Imprimindo a quantidade de livros por categoria.

     int maior = 0;//Declarando a variável maior.
     int menor = 0;//Declarando a variável menor.

    for(int i = 0; i < 50; i++){

        if(vetor[i].ano > maior){//Aqui está verificando qual dos livros cadastrados é o mais recente.
           maior = vetor[i].ano;
        }

        vetor[i].ano = maior;//Aqui o vetor[i].ano recebe o ano mais recente de publicação.

        if(vetor[i].ano < menor){//Aqui está verificando qual dos livros cadastrados é o mais antigo.
           menor = vetor[i].ano; 
        }
        vetor[i].ano = menor;//Aqui o vetor[i].ano recebe o ano mais antigo de publicação.
    }

    for(int i = 0; i < 1; i++){
        printf("\nLivro mais recente e o mais antigo: %d %d", vetor[i].ano, vetor[i].ano);//Aqui está imprindo o livro mais recente e o mais antigo.
    }

}
