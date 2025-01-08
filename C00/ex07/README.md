# ft_putnbr

## Descripción
**[see it in english 🏴󠁧󠁢󠁥󠁮󠁧󠁿](https://github.com/carloscm02/42-Telefonica/blob/main/C00/ex07/README_EN.md)**

`ft_putnbr` es una función en C que imprime un número entero en la salida estándar (normalmente la consola).

## Prototipo

```c
void	ft_putnbr(int nb);
```

## Parámetros

- `nb`: el número entero que se desea imprimir.

## Uso

La función `ft_putnbr` toma un número entero como argumento y lo imprime en la consola. Es útil para imprimir números enteros en la consola.

## Ejemplo

```c
#include <unistd.h>

void	print_minnumber(void)
{
	write(1, "2147483648", 10);
}

void	print_number(int cent, int copia)
{
	int	number_letter;

	while (cent)
	{
		number_letter = (copia / cent % 10) + '0';
		write(1, &number_letter, 1);
		cent /= 10;
	}
}

void	ft_putnbr(int nb)
{
	int	copia;
	int	cent;

	copia = nb;
	cent = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		copia = nb;
	}
	if (nb == -2147483648)
	{
		print_minnumber();
		return ;
	}
	while (copia >= 10)
	{
		copia = copia / 10;
		cent *= 10;
	}
	print_number(cent, nb);
}

// int	main(void)
// {
// 	ft_putnbr(57867);
// 	return (0);
// }
```

En este ejemplo, la función `ft_putnbr` imprimirá el número `57867` en la consola.

## Notas

- La función `ft_putnbr` utiliza la llamada al sistema `write` para enviar los caracteres a la salida estándar.
- La función `ft_putnbr` maneja correctamente el número mínimo de un entero de 32 bits, `-2147483648`.
