#include <iostream>
using namespace std;

int main() {
    string nom, sexe, fast_food, sport_pratique;
    int age;

    // Questions simples
    cout << "Quel est ton nom ? ";
    cin >> nom;

    cout << "Quel est ton age ? ";
    cin >> age;

    cout << "Quel est ton sexe (H/F) ? ";
    cin >> sexe;

    cout << "Preferez-vous Quick, McDonald's ou KFC ? ";
    cin >> fast_food;

    cout << "Pratiques-tu un sport (oui/non) ? ";
    cin >> sport_pratique;

    // Résumé
    cout << "=== Recapitulatif ===" << endl;
    cout << "Nom : " << nom << endl;
    cout << "Age : " << age << endl;
    cout << "Sexe : " << sexe << endl;
    cout << "Fast-food prefere : " << fast_food << endl;
    cout << "Pratique un sport : " << sport_pratique << endl;

    return 0;
}
