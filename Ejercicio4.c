#include <stdio.h>
#define N 4
int main() 
{
    int tabla[N][N];

    // Llenar la matriz con 1
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            tabla[i][j] = 1;
        }
    }

    // Mostrar matriz original
    printf("Matriz con unos:\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d ", tabla[i][j]);
        }
        printf("\n");
    }

    // Poner en 0 la diagonal principal
    for(int i = 0; i < N; i++) {
        tabla[i][i] = 0;
    }

    // Mostrar matriz modificada
    printf("\nMatriz con diagonal en 0:\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d ", tabla[i][j]);
        }
        printf("\n");
    }

    return 0;
}
