# Retos_CHAR_DOUBLE_INT
📘 Ejercicios Básicos en C: char, double e int

Este repositorio contiene ejemplos prácticos y sencillos para aprender a manejar los tipos de datos básicos en C.
Cada sección incluye 5 ejercicios con su explicación, código y salida esperada.

🔠 Sección 1: char en C

El tipo char se usa para almacenar un solo carácter, como letras, números o símbolos.

1️⃣ Mostrar el código ASCII de un carácter

📌 Descripción: El usuario ingresa un carácter y el programa muestra su valor en ASCII.

#include <stdio.h>

int main() {
    char c;
    printf("Ingresa un caracter: ");
    scanf(" %c", &c);
    printf("El codigo ASCII de '%c' es: %d\n", c, c);
    return 0;
}


✅ Ejemplo de salida

Ingresa un caracter: A
El codigo ASCII de 'A' es: 65

2️⃣ Determinar si un carácter es vocal o consonante

📌 Descripción: Se verifica si la letra ingresada es vocal o consonante.

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


✅ Ejemplo de salida

Ingresa una letra: e
Es una vocal

3️⃣ Convertir una letra minúscula a mayúscula

📌 Descripción: Si el carácter está en minúscula, se convierte a mayúscula.

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


✅ Ejemplo de salida

Ingresa una letra minuscula: b
Mayuscula: B

4️⃣ Contar cuántas veces aparece una letra en una palabra

📌 Descripción: Se cuenta la frecuencia de una letra dentro de una palabra.

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


✅ Ejemplo de salida

Ingresa una palabra: banana
Ingresa la letra a buscar: a
La letra 'a' aparece 3 veces

5️⃣ Verificar si un carácter es un dígito

📌 Descripción: Se determina si el carácter ingresado es un número (0–9).

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


✅ Ejemplo de salida

Ingresa un caracter: 7
Es un digito numerico

🔢 Sección 2: double en C

El tipo double representa números decimales de doble precisión, ideal para cálculos más exactos.

1️⃣ Calcular el valor de π con la serie de Leibniz

📌 Descripción: Calcula una aproximación de π usando 1000 términos de la serie.

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


✅ Ejemplo de salida

Valor aproximado de pi: 3.1415926536

2️⃣ Sumar dos números de tipo double

📌 Descripción: Solicita dos números y muestra su suma.

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


✅ Ejemplo de salida

Ingresa el primer numero: 2.5
Ingresa el segundo numero: 4.3
La suma es: 6.8000000000

3️⃣ Promedio de 5 números

📌 Descripción: Se calculan 5 números y se saca su promedio.

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

4️⃣ Verificar si un número es positivo, negativo o cero

📌 Descripción: Se clasifica el número ingresado.

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

5️⃣ Potencia de un número

📌 Descripción: Calcula base^exponente con pow().

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

🔢 Sección 3: int en C

El tipo int almacena números enteros sin decimales, positivos o negativos.

1️⃣ Sumar dos enteros con validación

📌 Descripción: Pide dos enteros y muestra su suma (validando entrada).

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

2️⃣ Determinar si un número es par o impar

📌 Descripción: Verifica si un entero es divisible por 2.

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

3️⃣ Factorial de un número entero positivo

📌 Descripción: Calcula n! con un ciclo.

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

4️⃣ Encontrar el mayor de tres números

📌 Descripción: Pide tres enteros y muestra el mayor.

#include <stdio.h>

int main() {
    int a, b, c, mayor;
    printf("Ingresa el primer numero: ");
    scanf("%d", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &b);
    printf("Ingresa el tercer numero: ");
    scanf("%d", &c);
    mayor = a;
    if(b > mayor) mayor = b;
    if(c > mayor) mayor = c;
    printf("El mayor es: %d\n", mayor);
    return 0;
}

5️⃣ Contar del 1 al 100

📌 Descripción: Usa un ciclo for para imprimir los números del 1 al 100.

#include <stdio.h>

int main() {
    int i;
    for(i = 1; i <= 100; i++)
        printf("%d\n", i);
    return 0;
}

⚙️ ¿Cómo compilar y ejecutar?

En terminal:

gcc archivo.c -o archivo
./archivo


Para los ejercicios que usan funciones matemáticas (pow):

gcc archivo.c -o archivo -lm
./archivo

