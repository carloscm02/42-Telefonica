# ft_is_negative

## Descripción
**[see it in english 🏴󠁧󠁢󠁥󠁮󠁧󠁿](https://github.com/carloscm02/42-Telefonica/blob/main/C00/ex04/README_EN.md)**

`ft_is_negative` es una función en C que imprime la letra 'N' si el número dado es negativo, y la letra 'P' si es positivo o cero.

## Prototipo

```c
void	ft_is_negative(int n)
```

## Parámetros

- `n`: El número que se desea verificar.

## Uso

La función `ft_is_negative` toma un número entero como argumento y determina si es negativo o no. Si el número es menor que cero, imprime la letra 'N' en la consola. Si el número es mayor o igual a cero, imprime la letra 'P' en la consola.

## Ejemplo

```c
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

// int	main(void)
// {
// 	ft_is_negative(-5);
// 	return (0);
// }
```

En este ejemplo, la función `ft_is_negative` imprimirá la letra 'N' en la consola, ya que el número dado es negativo.

## Notas

- La función `ft_is_negative` utiliza la llamada al sistema `write` para enviar los caracteres a la salida estándar.