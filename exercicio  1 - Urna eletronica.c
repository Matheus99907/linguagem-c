
// matheus tavares cavalcante//	


//programa com fim de simular uma urna eletronica//


#include <stdio.h>

#define CANDIDATES 3

int votos[CANDIDATES] = {0}; // Array para armazenar os votos dos candidatos

void exibirMenu() {
    printf("\nUrna Eletrônica - Menu\n");
    printf("1. Votar no Candidato 1\n");
    printf("2. Votar no Candidato 2\n");
    printf("3. Votar no Candidato 3\n");
    printf("4. Exibir resultados\n");
    printf("5. Encerrar votação\n");
}

void votar(int candidato) {
    if (candidato >= 1 && candidato <= CANDIDATES) {
        votos[candidato - 1]++;
        printf("Voto registrado com sucesso.\n");
    } else {
        printf("Candidato inválido.\n");
    }
}

void exibirResultados() {
    printf("\nResultados da votação:\n");
    for (int i = 0; i < CANDIDATES; i++) {
        printf("Candidato %d: %d votos\n", i + 1, votos[i]);
    }
}

int main() {
    int opcao;

    printf("Urna Eletrônica - Início da votação\n");

    while (1) {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
            case 2:
            case 3:
                votar(opcao);
                break;
            case 4:
                exibirResultados();
                break;
            case 5:
                printf("Votação encerrada. Obrigado por utilizar a urna eletrônica.\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}


