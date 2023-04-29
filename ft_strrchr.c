/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:38:01 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/29 10:25:59 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	int		i;

	i = ft_strlen(str);
	if (character == 0)
		return ((char *)str + i);
	while (i >= 0)
	{
		if (str[i] == character)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}

/*La función strrchr() en C se utiliza para buscar la última aparición de un 
carácter específico en una cadena de caracteres. */