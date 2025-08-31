#include <stdio.h>
#include <math.h>

int main() {
    double base, exponente, resultado;
    printf("Ingresa la base: ");
    scanf("%lf", &base);
    printf("Ingresa el exponente: ");
    scanf("%lf", &exponente);
    resultado = pow(base, exponente);
    printf("El resultado es: %.10lf\n", resultado);
    return 0;
}