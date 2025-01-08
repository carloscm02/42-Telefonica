# ft_print_numbers

## Descripción
**[see it in english 🏴󠁧󠁢󠁥󠁮󠁧󠁿](https://github.com/carloscm02/42-Telefonica/blob/main/C00/ex03/README_EN.md)**

`ft_print_numbers` es una función en C que imprime los dígitos del 0 al 9 en la salida estándar (normalmente la consola).

## Prototipo

```c
void	ft_print_numbers(void)
```

## Parámetros

- Ninguno

## Uso

La función `ft_print_numbers` no toma ningún argumento y simplemente imprime los dígitos del 0 al 9 en la consola. Es útil para imprimir los dígitos en orden ascendente.

## Ejemplo

```c
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	letra;

	i = 0;
	while (i <= 9)
	{
		letra = i + '0';
		write(1, &letra, 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
```

En este ejemplo, la función `ft_print_numbers` imprimirá los dígitos del 0 al 9 en la consola.

## Notas

- La función `ft_print_numbers` utiliza la llamada al sistema `write` para enviar los caracteres a la salida estándar.
