# ft_print_comb

## Descripción
**[see it in english 🏴󠁧󠁢󠁥󠁮󠁧󠁿](https://github.com/carloscm02/42-Telefonica/blob/main/C00/ex05/README_EN.md)**

`ft_print_comb` es una función en C que imprime todas las combinaciones posibles de tres dígitos diferentes en orden ascendente en la salida estándar (normalmente la consola).

## Prototipo

```c
void	ft_print_comb(void)
```

## Parámetros

- Ninguno

## Uso

La función `ft_print_comb` no toma ningún argumento y simplemente imprime todas las combinaciones posibles de tres dígitos diferentes en orden ascendente. Es útil para imprimir combinaciones de dígitos en un formato específico.

## Ejemplo

```c
#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a < '8')
	{
		b = a + 1;
		while (b < '9')
		{
			c = b +1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if ((a != '7'))
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
```

En este ejemplo, la función `ft_print_comb` imprimirá todas las combinaciones posibles de tres dígitos diferentes en orden ascendente en la consola.

## Notas

- La función `ft_print_comb` utiliza la llamada al sistema `write` para enviar los caracteres a la salida estándar.