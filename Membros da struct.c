#include <stdio.h>
#include <string.h>

struct Paciente {
    char nome[50];
    int idade;
    char telefone[15]; 
};

int main() {
    struct Paciente paciente[3];
    int i;

    //Preenchendo os dados dos pacientes
    strcpy(paciente[0].nome, "Luciana");
    paciente[0].idade = 40;
    strcpy(paciente[0].telefone, "11111-2222"); 

    strcpy(paciente[1].nome, "Pedro");
    paciente[1].idade = 34;
    strcpy(paciente[1].telefone, "33333-4444");
    
    strcpy(paciente[2].nome, "Claudia");
    paciente[2].idade = 27;
    strcpy(paciente[2].telefone, "55555-6666"); 

    //Exibindo os dados dos pacientes
    for (i = 0; i < 3; i++) {
        printf("Paciente %d:\n", i + 1);
        printf("Nome: %s\n", paciente[i].nome);
        printf("Idade: %d\n", paciente[i].idade);
        printf("Telefone: %s\n\n", paciente[i].telefone);
    }   
    return 0;
}