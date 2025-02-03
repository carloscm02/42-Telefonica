# ft_print_comb2

## Descripción
**[see it in english 🏴󠁧󠁢󠁥󠁮󠁧󠁿](https://github.com/carloscm02/42-Telefonica/blob/main/C00/ex06/README_EN.md)**

`ft_print_comb2` es una función en C que imprime todas las combinaciones posibles de dos dígitos en orden ascendente en la salida estándar.

## Prototipo

```c
void	ft_print_comb2(void)
```

## Parámetros

- Ninguno

## Uso

La función `ft_print_comb2` no toma ningún argumento y simplemente imprime todas las combinaciones posibles de dos dígitos en orden ascendente. Es útil para imprimir combinaciones de dígitos en un formato específico.

## Ejemplo

```c
#include <unistd.h>

void	write_complete_number(char a_or_b_complete[2], int amount)
{
	if (amount < 10)
	{
		write(1, "0", 1);
		write(1, &a_or_b_complete[1], 1);
	}
	else
	{
		write(1, &a_or_b_complete[0], 1);
		write(1, &a_or_b_complete[1], 1);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	a_letra[2];
	char	b_letra[2];

	a = 0;
	while (a < 99)
	{
		b = a +1;
		while (b < 100)
		{
			a_letra[0] = a / 10 + '0';
			a_letra[1] = a % 10 + '0';
			b_letra[0] = b / 10 + '0';
			b_letra[1] = b % 10 + '0';
			write_complete_number(a_letra, a);
			write(1, " ", 1);
			write_complete_number(b_letra, b);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
```

En este ejemplo, la función `ft_print_comb2` imprimirá todas las combinaciones posibles de dos dígitos en orden ascendente en la consola.

## Notas

- La función `ft_print_comb2` utiliza la llamada al sistema `write` para enviar los caracteres a la salida estándar.
- Es una función útil para imprimir combinaciones de dígitos en un formato específico, especialmente cuando se trabaja con algoritmos de búsqueda o generación de combinaciones.