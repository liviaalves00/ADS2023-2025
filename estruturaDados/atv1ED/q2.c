#include <stdio.h>;
#include <string.h>
// void main() {
// int x, *p;
// x = 100;
// p = x;
// printf(“Valor de p: %d.n”, *p);
// }

//a)
int main() {
    int x, *p;
    x = 100;
    p = &x; //Apontar para o endereço de x

    printf("Valor de p: %d\n", *p);
    
    return 0;
}

// void troca (int *i, int *j) {
// int *temp;
// *temp = *i;
// *i = *j;
// *j = *temp;
// }
//b)
void troca (int *i, int *j) {
    int temp; //alocação que faltava
    temp = *i;
    *i = *j;
    *j = temp;
}

// main(){
// char *a, *b;
// a = "uva";
// b = "carro";
// if (&a==&b)
// printf("são iguais");
// else{
// if (a < b)
// printf ("%s vem antes de %s no dicionário", a, b);
// else
// printf ("%s vem depois de %s no dicionário", a, b);
// }
// }
//c)
int main() {
    char *a, *b;
    a = "uva";
    b = "carro";
    
    int comparacao = strcmp(a, b); //função para comparar strings em c

    if (comparacao == 0) {
        printf("As strings são iguais.\n");
    } else if (comparacao < 0) {
        printf("%s vem antes de %s no dicionário.\n", a, b);
    } else {
        printf("%s vem depois de %s no dicionário.\n", a, b);
    }

    return 0;
}


