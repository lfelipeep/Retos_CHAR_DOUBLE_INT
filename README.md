# Retos_CHAR_DOUBLE_INT
📘 Ejercicios en C: char, double e int

Este repositorio contiene **ejemplos sencillos y prácticos** para aprender a usar los tipos de datos `char`, `double` e `int` en C.  
Cada sección incluye **5 ejercicios** con su respectiva explicación y código fuente.

---

## 🔤 Sección 1: `char` en C

El tipo de dato `char` se utiliza para almacenar un **solo carácter** (letra, número o símbolo).

### 1️⃣ Mostrar el código ASCII de un carácter
```c
#include <stdio.h>

int main() {
    char c;
    printf("Ingresa un caracter: ");
    scanf(" %c", &c);
    printf("El codigo ASCII de '%c' es: %d\n", c, c);
    return 0;
}

```
2️⃣ Determinar si un carácter es vocal o consonante

```
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
```
3️⃣ Convertir una letra minúscula a mayúscula
```
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
```
4️⃣ Contar cuántas veces aparece una letra en una palabra

```
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
```
5️⃣ Verificar si un carácter es un dígito numérico
```
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

```
🔢 Sección 2: double en C

El tipo double representa números reales de doble precisión, ideal para cálculos con decimales.

1️⃣ Calcular el valor de pi (serie de Leibniz)
```
#include <stdio.h>

int main() {
    double pi = 0.0;
    int i;
    for(i = 0; i < 1000; i++) {
        if(i % 2 == 0)
            pi += 1.0 / (2*i + 1);
        else
            pi -= 1.0 / (2*i + 1);
    }
    pi *= 4;
    printf("Valor aproximado de pi: %.10lf\n", pi);
    return 0;
}
```
2️⃣ Sumar dos números double
```
#include <stdio.h>

int main() {
    double a, b, suma;
    printf("Ingresa el primer numero: ");
    scanf("%lf", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%lf", &b);
    suma = a + b;
    printf("La suma es: %.10lf\n", suma);
    return 0;
}

```
3️⃣ Calcular el promedio de 5 números
```
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
```
4️⃣ Determinar si un número es positivo, negativo o cero
```
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
```
5️⃣ Calcular la potencia de un número
```
#include <stdio.h>
#include <math.h>

int main() {
    double base, exponente, resultado;
    printf("Ingresa la base: ");
    scanf("%lf", &base);
    printf("Ingresa el exponente: ");
    scanf("%lf", &exponente);
    resultado = pow(base, exponente);
    printf("El resultado es: %.10lf\n", resultado);
    return 0;
}
```
🔠 Sección 3: int en C

El tipo int representa números enteros, positivos o negativos, sin decimales.

1️⃣ Sumar dos enteros

```
#include <stdio.h>

int main() {
    int a, b;
    printf("Ingresa el primer numero: ");
    if (scanf("%d", &a) != 1) {
        printf("Entrada no valida\n");
        return 1;
    }
    printf("Ingresa el segundo numero: ");
    if (scanf("%d", &b) != 1) {
        printf("Entrada no valida\n");
        return 1;
    }
    printf("La suma es: %d\n", a + b);
    return 0;
}

```
2️⃣ Determinar si un número es par o impar
```
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
```
3️⃣ Calcular el factorial de un número
```
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

```
4️⃣ Encontrar el mayor de tres enteros
```
#include <stdio.h>

int main() {
    int a, b, c, mayor;
    printf("Ingresa el primer numero: ");
    if (scanf("%d", &a) != 1) return 1;
    printf("Ingresa el segundo numero: ");
    if (scanf("%d", &b) != 1) return 1;
    printf("Ingresa el tercer numero: ");
    if (scanf("%d", &c) != 1) return 1;

    mayor = a;
    if(b > mayor) mayor = b;
    if(c > mayor) mayor = c;

    printf("El mayor es: %d\n", mayor);
    return 0;
}

```
5️⃣ Contar del 1 al 100 con un ciclo
```
#include <stdio.h>

int main() {
    int i;
    for(i = 1; i <= 100; i++)
        printf("%d\n", i);
    return 0;
}

```
⚙️ ¿Cómo compilar y ejecutar?

En la terminal, dentro de la carpeta del archivo:
```
gcc archivo.c -o archivo
./archivo

```
Para los programas que usan funciones matemáticas (pow):
```
gcc archivo.c -o archivo -lm
./archivo

```



