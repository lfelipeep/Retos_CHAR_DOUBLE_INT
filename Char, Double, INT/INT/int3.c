#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;
    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &n);
    if(n < 0)
        printf("No existe el factorial de un numero negativo\n");
    else {
        for(i = 1; i <= n; i++)
            factorial *= i;
        printf("El factorial de %d es: %llu\n", n, factorial);
    }
    return 0;
}