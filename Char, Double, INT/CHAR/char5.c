#include <stdio.h>

int main() {
    char c;
    printf("Ingresa un caracter: ");
    scanf(" %c", &c);
    if (c >= '0' && c <= '9')
        printf("Es un digito numerico\n");
    else
        printf("No es un digito numerico\n");
    return 0;
}