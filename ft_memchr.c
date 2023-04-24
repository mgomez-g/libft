/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:51:31 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/24 08:29:11 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)str)[i] == (char)c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}

/*busca la primera aparición de un carácter en una cadena de memoria y devuelve 
un puntero al byte correspondiente en caso de encontrarlo.*/