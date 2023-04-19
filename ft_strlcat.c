/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:53:40 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/19 19:18:16 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	while (src[src_len])
		src_len++;
	i = 0;
	if (dstsize == 0 || dst_len >= dstsize)
		return (dstsize + src_len);
	while (src[i] && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*es utilizada para concatenar dos cadenas de caracteres y asegurar que
 no se produzca un desbordamiento de búfer en el proceso. En otras 
 palabras, la función strlcat() se utiliza para concatenar una cadena 
 de origen a una cadena de destino y asegurarse de que la cadena 
 resultante no exceda la longitud máxima especificada.*/