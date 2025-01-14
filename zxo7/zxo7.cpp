#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Entrez un nombre entre 2 et 10 : ";
    cin >> x;

    if (x >= 2 && x <= 10) {
        for (int i = 1; i <= x; ++i) {
            for (int j = 1; j <= x; ++j) {
                cout << i * j << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Nombre invalide ! Veuillez entrer entre 2 et 10." << endl;
    }

    return 0;
}
