#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {
        // Si divisible par 11, on passe au suivant sans additionner
        if (i % 11 == 0) {
            continue;
        }

        // Ajouter à somme si divisible par 5 ou 7
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si somme dépasse 5000, arrêter la boucle
        if (somme > 5000) {
            break;
        }
    }

    // Afficher la somme finale
    printf("La somme finale est : %d\n", somme);

    return 0;
}
