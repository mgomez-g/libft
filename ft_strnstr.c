/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:25:36 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/19 17:18:36 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_len;
	size_t	n_len;

	h_len = ft_strlen(haystack);
	n_len = ft_strlen(needle);
	if (n_len == 0)
		return ((char *)haystack);
	if (n_len > len)
		return (NULL);
	while (*haystack && len >= n_len)
	{
		if (ft_memcmp(haystack, needle, n_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

/*se utiliza para buscar la primera aparición de una subcadena needle
 dentro de una cadena haystack, pero limitando la búsqueda a los 
 primeros len caracteres de haystack. Si se encuentra la subcadena,
  la función devuelve un puntero al comienzo de la subcadena dentro
   de haystack. Si no se encuentra la subcadena, la función devuelve
    un puntero nulo.*/