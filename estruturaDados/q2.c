#include <stdio.h>


void printstr(char * string) {
    int i;
    for (i = 0; string[i] != '\0'; i++) {
        printf("%c\n", string[i]);
    }

}


int main() {
    char frase[20] = "teste";
    printf("Digite a frase: ");
    scanf("%s", frase);
    printstr(frase);   
}
