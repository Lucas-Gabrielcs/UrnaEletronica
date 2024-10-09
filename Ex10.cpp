#include <stdio.h>

int main() {
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int nulos = 0, brancos = 0;

    // Votação
    printf("Digite o numero do candidato \n1-4 para candidatos \n5 para nulo  \n6 para branco  \n0 para encerrar: ");
    scanf("%d", &voto);

    while (voto != 0) {
        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                nulos++;
                break;
            case 6:
                brancos++;
                break;
            default:
                printf("Voto inválido!\n");
                break;
        }

        // Vote ou encerre
        printf("Vote de novo ou digite 0 para encerrar: ");
        scanf("%d", &voto);
    }

    // Resultados
    printf("\nResultado da eleição:\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Votos nulos: %d\n", nulos);
    printf("Votos em branco: %d\n", brancos);

    return 0;
}

