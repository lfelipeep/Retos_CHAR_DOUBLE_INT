# Retos_CHAR_DOUBLE_INT
📘 Ejercicios en C: char, double e int

# 📘 Enums en C

Un **enum (enumeración)** es un tipo de dato que permite definir un conjunto de constantes con nombre, facilitando la legibilidad del código.

---

## ✨ Características
- Permite definir constantes con nombre para valores enteros.
- Mejora la legibilidad y el mantenimiento del código.
- Los valores por defecto empiezan en `0` y aumentan de `1` en `1`, pero se pueden asignar valores específicos.
- Útil para representar **estados, opciones o categorías**.

---

## ⚡ Formatos de impresión en C
Cuando uses `printf`, los formatos más comunes son:

- `%c` → Carácter (`char`)
- `%d` → Entero (`int`, `short`, `enum`)
- `%f` → Número decimal (`float`)
- `%.10f` → Número decimal con 10 decimales (`float` o `double`)
- `%ld` → Entero largo (`long`)

Ejemplo rápido:
```c
char letra = 'A';
int numero = 5;
float decimal = 3.14;
double grande = 2.7182818284;
long largo = 1000000;

printf("Letra: %c\n", letra);
printf("Entero: %d\n", numero);
printf("Decimal: %f\n", decimal);
printf("Double con 10 decimales: %.10f\n", grande);
printf("Long: %ld\n", largo);



