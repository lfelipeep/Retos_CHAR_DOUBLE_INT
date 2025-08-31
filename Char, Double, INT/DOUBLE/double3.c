#include <stdio.h>

int main() {
    double num, suma = 0;
    int i;
    for(i = 1; i <= 5; i++) {
        printf("Ingresa el numero %d: ", i);
        scanf("%lf", &num);
        suma += num;
    }
    printf("El promedio es: %.10lf\n", suma / 5);
    return 0;
}