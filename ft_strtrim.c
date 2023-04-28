/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:25:32 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/28 17:55:32 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chech_if_trimable(char const *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

static void	ft_put_in_arr(char *arr, const char *str, int start, int end)
{
	int	i;

	i = 0;
	while (start <= end)
		arr[i++] = str[start++];
	arr[i] = '\0';
}

char	*ft_strtrim(char const *str, char const *set)
{
	char	*newstr;
	int		start;
	int		end;

	start = 0;
	if (!str || !set)
		return (NULL);
	while (str[start] && ft_chech_if_trimable(set, str[start]))
		start++;
	end = ft_strlen(str) - 1;
	while (end > start && ft_chech_if_trimable(set, str[end]))
		end--;
	newstr = malloc(sizeof(char) * (end - start + 2));
	if (!newstr)
		return (NULL);
	ft_put_in_arr(newstr, str, start, end);
	return (newstr);
}

/*La función ft_chech_if_trimable se utiliza para comprobar si un carácter
determinado es trimable o no, es decir, si debe eliminarse de la cadena.
La función recorre la cadena de caracteres y devuelve 1 si encuentra el
carácter especificado y 0 si no lo encuentra.

La función ft_put_in_arr se utiliza para copiar una porción de la cadena
original en una nueva cadena, que será la cadena resultante sin los caracteres
especificados en el conjunto. La función recibe un puntero al nuevo arreglo,
la cadena original, un índice de inicio y un índice de finalización.
La función copia los caracteres de la cadena original entre los índices de
inicio y finalización en el nuevo arreglo.

La función ft_strtrim recibe dos argumentos, una cadena (str) y un conjunto
de caracteres (set) que deben eliminarse de la cadena. La función elimina los
caracteres especificados en el conjunto (set) del principio y del final de la
cadena (str), utilizando las funciones auxiliares ft_chech_if_trimable y
ft_put_in_arr. Luego, devuelve una nueva cadena (newstr) que contiene la cadena
original sin los caracteres especificados en el conjunto (set).*/