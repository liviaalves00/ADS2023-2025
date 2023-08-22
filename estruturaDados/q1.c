#include <stdio.h>

int len(char * string) {
    int i;
    for (i = 0; string[i] != '\0'; i++) {}
    return i;
}

void printstr(char * string) {
    int i;
    for (i = 0; string[i] != '\0'; i++) {
        printf("%c\n", string[i]);
    }

}

int main() {
    char frase[20];
    printf("Digite a frase: ");
    scanf("%s", frase);
    int lenght = len(frase);
    printf("%d", lenght);
    //printstr(frase);

}