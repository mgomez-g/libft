/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:02:01 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/18 17:49:55 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while ((*s1 == *s2) && ((n - 1) > 0))
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

/*compara dos bloques de memoria y determina si son iguales o no
dando un valor entero que indica la relacion entre los bloques*/