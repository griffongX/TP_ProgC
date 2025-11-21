#include <stdio.h>

int main() {
    int compteur = 5;  
    int i, j;

  
    //Avec boucle for
    printf("Triangle rectangle avec boucles for :\n");
    for (i = 1; i <= compteur; i++) {
        for (j = 1; j <= i; j++) {
            
            if (j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    //Avec boucle while
    printf("\nTriangle rectangle avec boucle while :\n");
    i = 1;
    while (i <= compteur) {
        j = 1;
        while (j <= i) {
            if (j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
