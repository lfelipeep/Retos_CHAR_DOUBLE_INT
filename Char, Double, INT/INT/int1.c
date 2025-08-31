#include <stdio.h>

int main() {
    int a, b;
    printf("Ingresa el primer numero: ");
    if (scanf("%d", &a) != 1) {
        printf("Entrada no valida\n");
        return 1;
    }
    printf("Ingresa el segundo numero: ");
    if (scanf("%d", &b) != 1) {
        printf("Entrada no valida\n");
        return 1;
    }
    printf("La suma es: %d\n", a + b);
    return 0;
}