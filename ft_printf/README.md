# Proyecto: ft_printf

**[see it in english 🏴󠁧󠁢󠁥󠁮󠁧󠁿](https://github.com/carloscm02/42-Telefonica/blob/main/ft_printf/README_EN.md)**

## Descripción

Este proyecto consiste en la implementación de una versión propia de la famosa función `printf()` de la biblioteca estándar de C. A través de este ejercicio, aprenderás a trabajar con funciones variádicas, es decir, aquellas que pueden aceptar un número variable de argumentos.

La función `ft_printf()` debe soportar un conjunto específico de conversiones de formato y replicar el comportamiento de `printf()` de manera similar, pero sin manejar el buffer de forma interna. Este proyecto es una excelente oportunidad para mejorar tus habilidades en la programación en C y preparar tu código para futuros proyectos más complejos.

## Índice

1. [Introducción](#introducción)
2. [Instrucciones generales](#instrucciones-generales)
3. [Implementación](#implementación)
4. [Funciones soportadas](#funciones-soportadas)
5. [Compilación y ejecución](#compilación-y-ejecución)
6. [Evaluación](#evaluación)
7. [Licencia](#licencia)

## Introducción

En este proyecto, reprogramarás la función `printf()` de C, replicando la funcionalidad del `printf` original pero con una implementación propia. Este ejercicio te permitirá aprender sobre funciones variádicas en C, cómo trabajar con cadenas y números, y cómo estructurar código extensible y eficiente.

## Instrucciones generales

- El proyecto debe estar escrito en C.
- Debes seguir la **Norma** de tu institución para la presentación y estilo del código.
- Debes asegurarte de que no haya **fugas de memoria**.
- El uso de las funciones estándar está restringido, solo se pueden usar funciones como `malloc`, `free`, `write`, y las funciones relacionadas con los argumentos variádicos: `va_start`, `va_arg`, `va_copy`, `va_end`.
- Se debe entregar un archivo **Makefile** que permita compilar el proyecto sin hacer relink.
  
## Implementación

La función principal de este proyecto es `ft_printf()`, que recibe un formato de cadena y un número variable de argumentos. Debes implementar las siguientes conversiones de formato:

- `%c` - Imprime un solo carácter.
- `%s` - Imprime una cadena de caracteres.
- `%p` - Imprime un puntero en formato hexadecimal.
- `%d` y `%i` - Imprime un número entero en base 10 (decimal).
- `%u` - Imprime un número sin signo en base 10.
- `%x` - Imprime un número hexadecimal en minúsculas.
- `%X` - Imprime un número hexadecimal en mayúsculas.
- `%%` - Imprime el carácter `%`.

### Estructura de código

La estructura del código está organizada en los siguientes archivos:

- `ft_printf.c`: Implementación de la función principal `ft_printf()`.
- `ft_utils.c`: Funciones auxiliares para manejar conversiones de tipos.
- `ft_printf.h`: Header file con las declaraciones necesarias.
- `Makefile`: El archivo de construcción para compilar el proyecto correctamente.

## Funciones soportadas

La función `ft_printf()` soporta los siguientes tipos de conversiones:

1. **%c**: Imprime un solo carácter.
2. **%s**: Imprime una cadena de caracteres.
3. **%p**: Imprime un puntero como una cadena hexadecimal.
4. **%d y %i**: Imprime un número entero en base 10.
5. **%u**: Imprime un número entero sin signo en base 10.
6. **%x**: Imprime un número entero en formato hexadecimal en minúsculas.
7. **%X**: Imprime un número entero en formato hexadecimal en mayúsculas.
8. **%%**: Imprime el símbolo `%`.

Cada tipo de conversión es manejado por una función auxiliar que se encarga de formatear los valores adecuadamente y luego imprimirlos.

## Compilación y ejecución

### Para compilar el proyecto

1. **Clona este repositorio** en tu máquina local:

```bash
git clone https://github.com/carloscm02/42-Telefonica.git
cd ft_printf
```

2. **Compila el proyecto** utilizando el Makefile:
```bash
make
```
Esto generará la librería `libftprintf.a` que puedes usar para enlazar con otros proyectos en C.

## Para ejecutar el proyecto
Si deseas probar el funcionamiento de `ft_printf()`, crea un archivo de prueba en el que puedes llamar a tu implementación de `ft_printf()` de la siguiente forma:

```c
#include "ft_printf.h"

int main() {
    int num = 42;
    ft_printf("El valor de num es: %d\n", num);
    return 0;
}
```

Compila y ejecuta tu archivo de prueba de la siguiente manera:

```bash
gcc -o test test.c -L. -lftprintf
./test
```

Esto debería imprimir algo similar a:

```yaml
El valor de num es: 42
```

## Evaluación
Tu código será evaluado en función de los siguientes criterios:

**Cumplimiento de la norma:** Se evaluará la calidad del código, su organización y estilo.
**Funcionalidad:** Tu `ft_printf()` debe comportarse de manera similar a `printf()`, con soporte para todas las conversiones solicitadas.
**Uso eficiente de memoria:** Asegúrate de que no haya fugas de memoria.
**Correcta implementación de las conversiones:** Cada conversión debe ser correctamente formateada y mostrada.

## Licencia
Este proyecto está bajo la licencia MIT.