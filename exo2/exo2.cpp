// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float note;
    int total = 0;

    do {
        scanf("%f", &note);

        if (note >= 10 && note <= 20) {
            total++;
        }

    } while (note >= 0 && note <= 20);

    printf("le nombre total de note au dessus de 10 est de  : %d", total);

}