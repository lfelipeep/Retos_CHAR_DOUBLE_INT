#include <stdio.h>

int main() {
    int n;
    printf("Ingresa un numero entero: ");
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("Es par\n");
    else
        printf("Es impar\n");
    return 0;
}