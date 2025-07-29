#include <stdio.h>
#include <stdlib.h>

int main() {
   //Definicao de variavel do tipo ponteiro
   int numero = 10;
   int *ponteiroInt = &numero; //Ponteiro para inteiro  

   //Exibindo o valor e o endereco da variavel 'numero' usando ponteiros
   printf("Valor de numero: %d\n", numero);
   printf("Endereco de numero: %p\n", ponteiroInt);
   printf("Valor apontado por ponteiroInt: %d\n", *ponteiroInt);

   //Alterando o valor da variavel ' numero' atraves do ponteiro
   *ponteiroInt = 20;   
    printf("Novo valor de numero: %d\n", numero);

    //Caracteristica especifica dos ponteiros
    //Alocacao dinamica de memoria com malloc
    int *ponteiroDinamico;
    ponteiroDinamico = (int *)malloc(sizeof(int)); //Alocando memoria para um inteiro
   
    if (ponteiroDinamico == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1; // Saindo do programa se a alocacao falhar
    }

    //Inicializando o valor alocado dinamicamente e exibindo
    *ponteiroDinamico = 50;
    printf("Valor alocado dinamicamente: %d\n", *ponteiroDinamico);

    //Uso correto dos ponteiros
    //Exemplo de usop seguro de ponteiros com verificacao e liberacao de memoria
    free(ponteiroDinamico); //Liberando a memoria alocada dinamicamente
    ponteiroDinamico = NULL; //Evitar ponteiro pendente - acessos acidentais

    //Testando o ponteiro após liberar a memoria
    if (ponteiroDinamico == NULL) {
        printf("Memoria liberada corretamente e o ponteiro esta invalido.\n");
    } 

    return 0; // Finalizando o programa
}