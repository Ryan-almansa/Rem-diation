#include <stdio.h>

int main() {
    float prix, montantTotal = 0;
    int quantite;

    printf("Calcul du montant de la facture\n");
    printf("Entrez un prix négatif pour arrêter la saisie.\n");

    while (1) {
        printf("Prix de l'article : ");
        scanf("%f", &prix);

        if (prix < 0) {
            break;
        }

        printf("Quantité : ");
        scanf("%d", &quantite);

        montantTotal += prix * quantite;
    }

    if (montantTotal > 500) {
        montantTotal *= 0.9; 
    }

    printf("Montant total de la facture : %f €\n", montantTotal);

    return 0;
}
