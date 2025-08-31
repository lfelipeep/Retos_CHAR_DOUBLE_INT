#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100], letra;
    int i, contador = 0;
    printf("Ingresa una palabra: ");
    scanf("%s", palabra);
    printf("Ingresa la letra a buscar: ");
    scanf(" %c", &letra);
    for(i = 0; palabra[i] != '\0'; i++)
        if(palabra[i] == letra)
            contador++;
    printf("La letra '%c' aparece %d veces\n", letra, contador);
    return 0;
}