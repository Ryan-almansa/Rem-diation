#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int notes[30];
    int somme = 0;
    float moyenne;

    srand(time(NULL));

    for (int i = 0; i < 30; i++) {
        notes[i] = rand() % 21;
        somme += notes[i];
    }

    moyenne = (float)somme / 30;

    printf("Les 30 notes sont :\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", notes[i]);
    }
    printf("La moyenne des notes est : %f\n", moyenne);

    return 0;
}
