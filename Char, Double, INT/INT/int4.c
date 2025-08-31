#include <stdio.h>

int main() {
    int a, b, c, mayor;
    printf("Ingresa el primer numero: ");
    if (scanf("%d", &a) != 1) {
        printf("numero no valido\n");
        return 1;
    }
    printf("Ingresa el segundo numero: ");
    if (scanf("%d", &b) != 1) {
        printf("numero no valido\n");
        return 1;
    }
    printf("Ingresa el tercer numero: ");
    if (scanf("%d", &c) != 1) {
        printf("numero no valido\n");
        return 1;
    }
    mayor = a;
    if(b > mayor) mayor = b;
    if(c > mayor) mayor = c;
    printf("El mayor es: %d\n", mayor);
    return 0;
}