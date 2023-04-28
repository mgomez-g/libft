/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 09:33:56 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/28 17:37:52 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	swap;

	i = 0;
	size = ft_strlen(str) - 1;
	while (size > i)
	{
		swap = str[i];
		str[i] = str[size];
		str[size] = swap;
		size--;
		i++;
	}
	return (str);
}

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	if (n < 0)
		sign = -1;
	str = (char *)malloc(sizeof(char) * ft_intlen(n) + 1);
	if (!str)
		return (0);
	if (n == 0)
		str[i++] = '0';
	while (n != 0)
	{
		str[i] = (n % 10) * sign + '0';
		i++;
		n = n / 10;
	}
	if (sign == -1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}

/*La función ft_strrev invierte el string de caracteres dado ya que la funcion
itoa les hace print de derecha a izquierda.

La función ft_intlen calcula el número de dígitos en un número entero.
Recibe como argumento un número entero y devuelve el número de dígitos
que tiene el número, incluyendo el signo negativo si es un número negativo.

Función ft_itoa: Esta es la función principal que convierte un número entero
en una cadena de caracteres

convierte un número entero en una cadena de caracteres. La función toma tres
argumentos: el primer argumento es el número entero a convertir, el segundo
argumento es un puntero a un array de caracteres donde se almacenará la cadena
resultante y el tercer argumento es la base en la que se desea representar el
número entero.*/