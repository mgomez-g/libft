/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:19:18 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/29 11:05:45 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == 0 && src == 0)
		return (NULL);
	if (src > dst)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (n > 0)
		{
			((unsigned char *)dst)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	return ((void *)dst);
}



/*#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	n--;
	if (dst == 0 && src == 0)
		return (NULL);
	else if (dst > src)
		while (n-- > 0)
			((char *)dst)[n] = ((char *)src)[n];
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

El código implementa la función ft_memmove, que copia n bytes desde la 
dirección de origen src a la dirección de destino dst, tratando correctamente 
los casos en que las regiones de origen y destino se superponen.*/