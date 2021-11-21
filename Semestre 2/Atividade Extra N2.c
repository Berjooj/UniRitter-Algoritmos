#include <stdio.h>
#include <string.h>

int main(void) {
    char teclado[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char frase[1024];

    int i, j;

    while (fgets(frase, 1024, stdin) != NULL) {
        for (i = 0; i < strlen(frase); i++) {
            for (j = 0; j < strlen(teclado); j++) {
                if (frase[i] == teclado[j]) {
                    printf("%c", teclado[j - 1]);
                    break;
                }
            }
            if (frase[i] == ' ')
                printf(" ");
        }
        printf("\n");
    }
}