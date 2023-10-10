#include <stdio.h>
#include <iostream>
using namespace std;

//a)
typedef struct no{
int item;
struct no *prox;
}No;
int main(){
No v[4]={{3,v+2},{4,NULL},{10,v+1}};
for (No *p=v;p!=NULL;p=p->prox){
cout<<p->item<<endl;
// 3 10 4
}
}

//b)
No *n1 = (No*)malloc(sizeof(No));
n1->item = 1;
n1->prox = NULL;

No *n2 = (No*)malloc(sizeof(No));
n2->item = 4;
n2->prox = NULL;

n1->prox = n2; // encadeando n1 e n2

//c)
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int item;
    struct No* prox;
} No;

int main() {
    No* n1 = (No*)malloc(sizeof(No));
    n1->item = 10;
    n1->prox = NULL;

    No* n2 = (No*)malloc(sizeof(No));
    n2->item = 3;
    n2->prox = NULL;

    No* n3 = (No*)malloc(sizeof(No));
    n3->item = 4;
    n3->prox = NULL;

    // Encadeando os nós para criar a lista ordenada
    n1->prox = n2;
    n2->prox = n3;

    No* current = n1; 
    while (current != NULL) {
        printf("%d ", current->item);
        current = current->prox; 
    }

    printf("\n"); 
    
    free(n1);
    free(n2);
    free(n3);

    return 0;
}
