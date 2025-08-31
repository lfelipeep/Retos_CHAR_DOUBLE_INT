#include <stdio.h>

int main() {
    char c;
    printf("Ingresa un caracter: ");
    scanf(" %c", &c);
    printf("El codigo ASCII de '%c' es: %d\n", c, c);
    return 0;

}

## Sección 1: char en C

El tipo de dato `char` se utiliza para almacenar un solo carácter, como una letra, número o símbolo.

### 1. Mostrar el código ASCII de un carácter

Lee un carácter y muestra su código ASCII.
