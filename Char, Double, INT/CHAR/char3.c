
#include <stdio.h>

int main() {
    char c;
    printf("Ingresa una letra minuscula: ");
    scanf(" %c", &c);
    if (c >= 'a' && c <= 'z')
        printf("Mayuscula: %c\n", c - 32);
    else
        printf("No es minuscula\n");
    return 0;
}