#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float prix;
    int qtt;
    float total = 0;

    do {
        printf("Entrez un prix (0 ou negatif pour arreter) : ");
        scanf("%f", &prix);

        if (prix <= 0) {
            break; 
        }

        printf("Entrez une quantite : ");
        scanf("%d", &qtt);

        if (qtt > 0) {
            total += prix * qtt; 
        }

    } while (prix > 0 && qtt > 0);

    if (total > 500) {
        total *= 0.9; 
    }

    printf("Total a payer : %f euros\n", total);
    return 0;
}