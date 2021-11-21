//
// 14. Quiz game
// Consiste em perguntas e respostas simples baseado em esportes, conhecimento geral, conteúdo técnico, etc.
// Os jogadores só precisam selecionar a resposta correta e podem chegar ao próximo nível. É um projeto muito simples.
//
#include <stdio.h>
#include <string.h>

typedef struct {
    int opcaoCerta;
    char pergunta[255];
    char categoria[60];
    char opcoes[4][80];
} Questoes;

void init(Questoes *questoes);

void desenhaMenu(const int *indice, Questoes *questao, int *darBoasVindas);

int processaResposta(Questoes *questao, const char *opcao);

int main() {
    int i, pontuacao = 0, darBoasVindas = 1;
    char opcaoSelecionada;
    Questoes questoes[10];

    init(questoes);

    for (i = 0; i < 10; i++) {
        desenhaMenu(&i, &questoes[i], &darBoasVindas);
        fflush(stdin);
        scanf("%c", &opcaoSelecionada);
        int retorno = processaResposta(&questoes[i], &opcaoSelecionada);

        if (retorno == -1) {
            printf("Opa, parece que voce digitou um valor invalido!\nTente novamente digitando a, b, c ou d!\n");
            i--;
        } else if (retorno == 0) {
            printf("Opa! Voce errou!\n");
            break;
        } else {
            pontuacao++;
            printf("Parabens, a resposta esta certa!\n");
        }
    }

    printf("Sua pontuacao foi de: %d\n", pontuacao);
    return 0;
}

void desenhaMenu(const int *indice, Questoes *questao, int *darBoasVindas) {
    printf("+-----------------------------------+\n");
    if (*darBoasVindas) {
        printf("|     Ola bem vindo(a) ao Quiz      |\n");
        printf("+-----------------------------------+\n\n");
        *darBoasVindas = 0;
    }

    printf("Questao nr: %d\n", (*indice) + 1);
    printf("Categoria: %s\n", questao->categoria);

    printf("%s\n", questao->pergunta);

    printf("a) %s\n", questao->opcoes[0]);
    printf("b) %s\n", questao->opcoes[1]);
    printf("c) %s\n", questao->opcoes[2]);
    printf("d) %s\n", questao->opcoes[3]);
}

int processaResposta(Questoes *questao, const char *opcao) {
    int index;
    switch (*opcao) {
        case 'a':
            index = 0;
            break;
        case 'b':
            index = 1;
            break;
        case 'c':
            index = 2;
            break;
        case 'd':
            index = 3;
            break;
        default:
            return -1;
    }

    if (index == questao->opcaoCerta)
        return 1;
    return 0;
}

void init(Questoes *questoes) {
    int cont = 0;
    strcpy(questoes[cont].pergunta,
           "No futebol, quantos cartoes, e de que cores respectivamente, eh preciso que um jogador receba e seja expulso de uma partida?");
    strcpy(questoes[cont].opcoes[0], "3 amarelos e 1 vermelho");
    strcpy(questoes[cont].opcoes[1], "2 amarelos e 1 vermelho");
    strcpy(questoes[cont].opcoes[2], "4 amarelos e 1 vermelho");
    strcpy(questoes[cont].opcoes[3], "Somente 1 vermelho");
    questoes[cont].opcaoCerta = 3;
    strcpy(questoes[cont].categoria, "Esportes");

    cont++;
    strcpy(questoes[cont].pergunta, "Qual eh a cor da faixa mais alta, que pode ser adquirida no judo?");
    strcpy(questoes[cont].opcoes[0], "Azul");
    strcpy(questoes[cont].opcoes[1], "Branca");
    strcpy(questoes[cont].opcoes[2], "Preta");
    strcpy(questoes[cont].opcoes[3], "Vermelha");
    questoes[cont].opcaoCerta = 3;
    strcpy(questoes[cont].categoria, "Esportes");

    cont++;
    strcpy(questoes[cont].pergunta, "Quanto mede a quadra de jogo de handebol?");
    strcpy(questoes[cont].opcoes[0], "40x20");
    strcpy(questoes[cont].opcoes[1], "50x30");
    strcpy(questoes[cont].opcoes[2], "40x25");
    strcpy(questoes[cont].opcoes[3], "35x20");
    questoes[cont].opcaoCerta = 0;
    strcpy(questoes[cont].categoria, "Esportes");

    cont++;
    strcpy(questoes[cont].pergunta, "Quais sao os herois do filme Os Vingadores?");
    strcpy(questoes[cont].opcoes[0], "Hulk, Viuva negra, Homem de Ferro, Capitao Brasil, Thor, Gaviao Arqueiro");
    strcpy(questoes[cont].opcoes[1], "Hulk, Viuva negra, Homem de Ferro, Capitao America, Thor, Gaviao Arqueiro");
    strcpy(questoes[cont].opcoes[2], "Goku, Vegeta, Kami-Sama, Freesa Gogeta");
    strcpy(questoes[cont].opcoes[3], "Professor X, Ciclope, Homem de Ferro, Anjo, Fera, Fenix");
    questoes[cont].opcaoCerta = 1;
    strcpy(questoes[cont].categoria, "Conhecimentos Gerais");

    cont++;
    strcpy(questoes[cont].pergunta, "Qual a menor ilha do mundo?");
    strcpy(questoes[cont].opcoes[0], "Groelandia");
    strcpy(questoes[cont].opcoes[1], "Vaticano");
    strcpy(questoes[cont].opcoes[2], "Escocia");
    strcpy(questoes[cont].opcoes[3], "Ilhas Pitcairn");
    questoes[cont].opcaoCerta = 3;
    strcpy(questoes[cont].categoria, "Conhecimentos Gerais");

    cont++;
    strcpy(questoes[cont].pergunta, "Em que data a Uniao Sovietica teve fim?");
    strcpy(questoes[cont].opcoes[0], "15 de janeiro de 1990");
    strcpy(questoes[cont].opcoes[1], "25 de novembro de 1989");
    strcpy(questoes[cont].opcoes[2], "20 de novembro de 1989");
    strcpy(questoes[cont].opcoes[3], "25 de dezembro de 1991");
    questoes[cont].opcaoCerta = 3;
    strcpy(questoes[cont].categoria, "Conhecimentos Gerais");

    cont++;
    strcpy(questoes[cont].pergunta, "Nao eh um sistema operacional:");
    strcpy(questoes[cont].opcoes[0], "Linux");
    strcpy(questoes[cont].opcoes[1], "Windows");
    strcpy(questoes[cont].opcoes[2], "Paint");
    strcpy(questoes[cont].opcoes[3], "MacOS");
    questoes[cont].opcaoCerta = 2;
    strcpy(questoes[cont].categoria, "Computacao");

    cont++;
    strcpy(questoes[cont].pergunta, "Eh uma linguagem de marcacao:");
    strcpy(questoes[cont].opcoes[0], "Java");
    strcpy(questoes[cont].opcoes[1], "HTML");
    strcpy(questoes[cont].opcoes[2], "C/C++");
    strcpy(questoes[cont].opcoes[3], "Kotlin");
    questoes[cont].opcaoCerta = 1;
    strcpy(questoes[cont].categoria, "Computacao");

    cont++;
    strcpy(questoes[cont].pergunta, "Nao eh um comando da stdio.h");
    strcpy(questoes[cont].opcoes[0], "printf");
    strcpy(questoes[cont].opcoes[1], "scanf");
    strcpy(questoes[cont].opcoes[2], "putc");
    strcpy(questoes[cont].opcoes[3], "cout");
    questoes[cont].opcaoCerta = 3;
    strcpy(questoes[cont].categoria, "Computacao");

    cont++;
    strcpy(questoes[cont].pergunta, "Sao exemplos de hardware, somente:");
    strcpy(questoes[cont].opcoes[0], "Teclado, Mouse e Monitor");
    strcpy(questoes[cont].opcoes[1], "Mouse, placa de video e Windows");
    strcpy(questoes[cont].opcoes[2], "Windows, Linux e DOS");
    strcpy(questoes[cont].opcoes[3], "Word, impressora e monitor");
    questoes[cont].opcaoCerta = 0;
    strcpy(questoes[cont].categoria, "Computacao");
}