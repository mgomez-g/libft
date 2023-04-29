/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:19:18 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/29 11:14:21 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst == NULL && src == NULL)
		return (0);
	else if (dst > src)
		while (n-- > 0)
			((char *)dst)[n] = ((char *)src)[n];
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
