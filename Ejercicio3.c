#include <stdio.h>

#define N1 5
#define N2 5

int main() {
    int v1[N1], v2[N2];
    int v3[N1 + N2];

    // Leer primer vector
    printf("Ingresa %d valores para el primer vector:\n", N1);
    for(int i = 0; i < N1; i++) {
        scanf("%d", &v1[i]);
    }

    // Leer segundo vector
    printf("Ingresa %d valores para el segundo vector:\n", N2);
    for(int i = 0; i < N2; i++) {
        scanf("%d", &v2[i]);
    }

    // Copiar v1 a v3
    for(int i = 0; i < N1; i++) {
        v3[i] = v1[i];
    }

    // Copiar v2 a continuación de v1 en v3
    for(int i = 0; i < N2; i++) {
        v3[N1 + i] = v2[i];
    }

    // Mostrar el tercer vector
    printf("Vector resultante:\n");
    for(int i = 0; i < N1 + N2; i++) {
        printf("%d ", v3[i]);
    }

    return 0;
}
