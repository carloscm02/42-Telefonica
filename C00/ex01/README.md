# ft_print_alphabet

## Descripción
**[see it in english 🏴󠁧󠁢󠁥󠁮󠁧󠁿](##Description)**

`ft_print_alphabet` es una función en C que imprime el alfabeto en minúsculas en orden ascendente en la salida estándar (normalmente la consola).

## Prototipo

```c
void	ft_print_alphabet(void)
```

## Parámetros

- Ninguno

## Uso

La función `ft_print_alphabet` no toma ningún argumento y simplemente imprime el alfabeto en minúsculas en orden ascendente. Es útil para imprimir el alfabeto completo en la consola.

## Ejemplo

```c
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
```

En este ejemplo, la función `ft_print_alphabet` imprimirá el alfabeto en minúsculas en orden ascendente en la consola.

## Notas

- La función `ft_print_alphabet` utiliza la llamada al sistema `write` para enviar los caracteres a la salida estándar.
- Es una función básica pero fundamental en la programación en C, especialmente cuando se trabaja con funciones de nivel inferior que requieren control preciso sobre la salida de caracteres.

## Description
**[ver en español 🇪🇸](##Descripción)**

`ft_print_alphabet` is a C function that prints the lowercase alphabet in ascending order to the standard output (usually the console).

## Prototype

```c
void	ft_print_alphabet(void)
```

## Parameters

- None

## Usage

The `ft_print_alphabet` function takes no arguments and simply prints the lowercase alphabet in ascending order. It is useful for printing the entire alphabet to the console.

## Example

```c
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
```

In this example, the `ft_print_alphabet` function will print the lowercase alphabet in ascending order to the console.

## Notes

- The `ft_print_alphabet` function uses the `write` system call to send the characters to the standard output.
- It is a basic but fundamental function in C programming, especially when working with lower-level functions that require precise control over character output.
