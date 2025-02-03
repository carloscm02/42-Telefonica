# ft_print_alphabet

## Descripción
**[see it in english 🏴󠁧󠁢󠁥󠁮󠁧󠁿](https://github.com/carloscm02/42-Telefonica/blob/main/C00/ex01/README_EN.md)**

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
