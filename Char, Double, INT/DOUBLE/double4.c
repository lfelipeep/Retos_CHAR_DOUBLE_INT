#include <stdio.h>

int main() {
    double num;
    printf("Ingresa un numero: ");
    scanf("%lf", &num);
    if(num > 0)
        printf("Es positivo\n");
    else if(num < 0)
        printf("Es negativo\n");
    else
        printf("Es cero\n");
    return 0;
}