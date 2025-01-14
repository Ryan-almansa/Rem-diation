#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Entrée  3 nombres
    cout << "Entrez trois nombres : ";
    cin >> a >> b >> c;

    if (a > b) swap(a, b); // Échange si a est plus grand que b
    if (b > c) swap(b, c); // Échange si b est plus grand que c
    if (a > b) swap(a, b); // Vérifie à nouveau entre a et b

    // ordre croissant
    cout << "Les nombres dans l'ordre croissant sont : " << a << " " << b << " " << c << endl;

    return 0;
}
