#include <stdio.h>

int main() {
    int escolha;
    printf("Você se depara com uma encruzilhada misteriosa. Qual caminho você escolhe?\n");
    printf("1. Caminho da Floresta\n");
    printf("2. Caminho da Montanha\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        // Caminho da Floresta
        printf("Você escolheu o Caminho da Floresta.\n");
        printf("Ao seguir pelo Caminho da Floresta, você encontra uma vila encantada.\n");
        printf("Os habitantes da vila, impressionados com sua bravura, lhe oferecem um aliado poderoso para suas aventuras futuras.\n");
    } else if (escolha == 2) {

        printf("Você escolheu o Caminho da Montanha.\n");
        printf("Ao escalar a montanha, você descobre uma caverna repleta de dragões.\n");
        printf("Você se vê diante de duas opções: lutar contra os dragões ou fugir para salvar sua vida.\n");
    } else {

        printf("Escolha inválida. Por favor, reinicie o jogo e selecione um caminho válido.\n");
    }

    return 0;
}
