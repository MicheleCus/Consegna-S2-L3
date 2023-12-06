#include <stdio.h>
int main() {
    
    float numero1, numero2, moltiplicazione;
    printf("Inserisci il primo numero  ");
    scanf("%f", &numero1);
    printf("Inserisci il secondo  ");
    scanf("%f", &numero2);
    moltiplicazione = numero1 * numero2;
    printf("La moltiplicazione di %f e %f risulta %f\n", numero1, numero2, moltiplicazione);
    return 0;
}

