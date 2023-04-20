/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:24:39 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/20 11:50:05 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (start >= ft_strlen(s))
		str = (char *)malloc(1);
	else if (len >= ft_strlen(s))
		str = (char *)malloc(ft_strlen(s) - start + 1);
	else
		str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = 0;
	return (str);
}

/*El código es una implementación de la función ft_substr, que toma una cadena
 de caracteres s y devuelve una nueva cadena que es una subcadena de s.
  Los argumentos start y len indican el índice donde comienza la subcadena
   y la longitud de la subcadena, respectivamente.*/