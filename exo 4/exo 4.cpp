#include <iostream>

int produitSansMultiplication(int a, int b) {
    int resultat = 0;
    for (int i = 0; i < b; i++) {
        resultat += a; 
    }
    return resultat;
}

int main() {
    int a, b;
    std::cout << "Entrez deux nombres a et b : ";
    std::cin >> a >> b;

    int produit = produitSansMultiplication(a, b);
    std::cout << "Le produit de " << a << " et " << b << " est : " << produit << std::endl;

    return 0;
}
