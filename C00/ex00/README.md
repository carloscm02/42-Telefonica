# ft_putchar

## Descripción
**[see it in english 🏴󠁧󠁢󠁥󠁮󠁧󠁿](##Description)**

`ft_putchar` es una función en C que se utiliza para imprimir un solo carácter en la salida estándar (normalmente la consola).

## Prototipo

```c
void	ft_putchar(char c)
```

## Parámetros

- `c`: El carácter que se desea imprimir.

## Uso

La función `ft_putchar` toma un carácter como argumento y lo envía a la salida estándar. Es útil para imprimir caracteres individuales, especialmente en el contexto de otras funciones que manejan cadenas de texto o caracteres.

## Ejemplo

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_putchar('a');
// 	return (0);
// }
```

En este ejemplo, la función `ft_putchar` imprimirá el carácter `c` en la consola.

## Notas

- La función `ft_putchar` utiliza la llamada al sistema `write` para enviar el carácter a la salida estándar.
- Es una función básica pero fundamental en la programación en C, especialmente cuando se trabaja con funciones de nivel inferior que requieren control preciso sobre la salida de caracteres.


## Description
**[ver en español 🇪🇸](##Descripción)**

`ft_putchar` is a C function used to print a single character to the standard output (usually the console).

## Prototype

```c
void	ft_putchar(char c)
```

## Parameters

- `c`: The character to print.

## Usage

The `ft_putchar` function takes a character as an argument and sends it to the standard output. It is useful for printing individual characters, especially in the context of other functions that handle text strings or characters.

## Example

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_putchar('a');
// 	return (0);
// }
```

In this example, the `ft_putchar` function will print the character `c` to the console.


## Notes

- The `ft_putchar` function uses the `write` system call to send the character to the standard output.
- It is a basic but fundamental function in C programming, especially when working with lower-level functions that require precise control over character output.