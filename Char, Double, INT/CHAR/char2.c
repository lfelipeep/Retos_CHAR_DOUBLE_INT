#include <stdio.h>

int main() {
    char c;
    printf("Ingresa una letra: ");
    scanf(" %c", &c);
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        printf("Es una vocal\n");
    else
        printf("Es una consonante\n");
    return 0;
}