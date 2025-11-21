#include <stdio.h>

void afficherBinaire(int nombre) {
    int taille = sizeof(int) * 8; 
    int i;
    int debut_utile = 0; 

    
    for (i = taille - 1; i >= 0; i--) {
        int bit = (nombre >> i) & 1;
        if (bit == 1) debut_utile = 1;
        if (debut_utile || i == 0) { 
            printf("%d", bit);
        }
    }
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int n = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < n; i++) {
        printf("Nombre: %d, binaire: ", nombres[i]);
        afficherBinaire(nombres[i]);
        printf("\n");
    }

    return 0;
}
