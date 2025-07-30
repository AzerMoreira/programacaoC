	#include <stdio.h>
	#include <string.h>

    struct Pessoa {
        char nome[50];
        int idade;
        char telefone [15];     
    };

    int main() {
        struct Pessoa lista[3];

        // Preenchendo as informações para cada pessoa
        strcpy(lista[0].nome, "Alana");
        lista[0].idade = 18;
        strcpy(lista[0].telefone, "1234-56789");

        strcpy(lista[1].nome, "lucas");
        lista[1].idade = 14;
        strcpy(lista[1].telefone, "9876-54321");
        
        strcpy(lista[2].nome, "Julia");
        lista[2].idade = 8;
        strcpy(lista[2].telefone, "54321-6789");

        //Imprimindo as informações de cada pessoa
        for (int i = 0; i < 3; i++) {
            printf("Nome: %s\n", lista[i].nome);
            printf("Idade: %d\n", lista[i].idade);
            printf("Telefone: %s\n", lista[i].telefone);
            
        }


        return 0; // Finalizando o programa
    }