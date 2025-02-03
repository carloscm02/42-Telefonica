# ft_print_combn

## Descripción
**[see it in english 🏴󠁧󠁢󠁥󠁮󠁧󠁿](https://github.com/carloscm02/42-Telefonica/blob/main/C00/ex08/README_EN.md)**

`ft_print_combn` es una función en C que imprime todas las combinaciones posibles de `n` dígitos en orden ascendente en la salida estándar.

## Prototipo

```c
void	ft_print_combn(int n);
```

## Parámetros

- `n`: el número de dígitos que se desea imprimir.

## Uso

La función `ft_print_combn` toma un número entero `n` como argumento y lo imprime en la consola. Es útil para imprimir combinaciones de dígitos en un formato específico.

## Ejemplo
```c
#include <unistd.h>

void	pintar(int number, int lgth, int entero)
{
	int	max_decimal;
	int	char_real_decimal;

	max_decimal = 1;
	while (lgth > 1)
	{
		max_decimal *= 10;
		lgth--;
	}
	while (max_decimal)
	{
		char_real_decimal = (number / max_decimal) % 10 + '0';
		write(1, &char_real_decimal, 1);
		max_decimal /= 10;
	}
	if (entero)
	{
		write(1, ", ", 2);
	}
}

int	get_left_number(int number, int lgth)
{
	int	i;
	int	cent;

	i = 1;
	cent = 1;
	while (i < lgth)
	{
		cent *= 10;
		i++;
	}
	return (number / cent);
}

int	sumar_decimal(int number, int cr_posit)
{
	int	n_numb;
	int	bs_num;
	int	reset_numb;

	n_numb = number + cr_posit;
	cr_posit = cr_posit / 10;
	while (cr_posit)
	{
		reset_numb = (n_numb / cr_posit) % 10;
		bs_num = (n_numb / (cr_posit * 10)) % 10;
		n_numb = n_numb - reset_numb * cr_posit + (bs_num + 1) * cr_posit;
		cr_posit /= 10;
	}
	return (n_numb);
}

//en numb[0] numero decimal (1, 10, 100)
//en numb[1] numero ceros(0, 1, 2...)
//en numb[2] numero real
void	ft_print_combn(int nb)
{
	int	numb[3];
	int	i;

	i = 0;
	numb[2] = 0;
	while (i < nb)
		numb[2] = numb[2] * 10 + i++;
	numb[0] = 1;
	numb[1] = 0;
	while ((get_left_number(numb[2], nb) + nb - 1) < 9)
	{
		if ((numb[2] / numb[0]) % 10 == 9 - numb[1])
		{
			numb[0] *= 10;
			numb[1]++;
		}
		else
		{
			pintar(numb[2], nb, 1);
			numb[2] = sumar_decimal(numb[2], numb[0]);
			numb[0] = 1;
			numb[1] = 0;
		}
	}
	pintar(numb[2], nb, 0);
}

// int	main(void)
// {
// 	ft_print_combn(2);
// 	return (0);
// }
```

En este ejemplo, la función `ft_print_combn` imprimirá todas las combinaciones posibles de dos dígitos en la consola.

## Notas

- La función `ft_print_combn` utiliza la llamada al sistema `write` para enviar los caracteres a la salida estándar.