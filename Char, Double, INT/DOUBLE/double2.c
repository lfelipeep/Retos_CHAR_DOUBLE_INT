#include <stdio.h>

int main() {
    double a, b, suma;
    printf("Ingresa el primer numero: ");
    scanf("%lf", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%lf", &b);
    suma = a + b;
    printf("La suma es: %.10lf\n", suma);
    return 0;
}