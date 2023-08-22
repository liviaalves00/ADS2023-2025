#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char f1[10];
char f2[10];
bool eh_nula(char digito){
    return (digito == '\0' || digito == '\n');
}
int len(char * string) {
    int i;
    for (i = 0; (!eh_nula(string[i])); i++) {}
    return i;
}
bool comparar_strings(char *string1, char *string2){
    int len1 = len(string1);
    int len2 = len(string2);
    if(len1 != len2){
        return false;
    }for (int i = 0; i < len1; i++){
        if(string1[i] != string2[i])
            return false;
    }return true;
}
int main(){
    printf("Digite a string.\n>>> ");
    fgets(f1,sizeof(f1),stdin);//fgets(namedavariavel,sizeofdavariavel,stdin)
    printf("Digite outra string.\n>>> ");
    fgets(f2,sizeof(f2),stdin);
    bool sao_iguais = comparar_strings(f1,f2);
    char *sera_se_sao_iguais =  sao_iguais ? "SIM" : "NAO";
    printf("\nSAO IGUAIS????????? \\'0'/\n%s\n",sera_se_sao_iguais);
    printf("%d\n",len(f1));
    int a = strlen(f2);
    printf("%d",a);
}