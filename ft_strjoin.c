/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:17:10 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/20 12:18:23 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*newstr;
	int		i;

	i = 0;
	if (!str1 || !str2)
		return (NULL);
	newstr = malloc(sizeof(char) * ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!newstr)
		return (NULL);
	while (*str1)
		newstr[i++] = *str1++;
	while (*str2)
		newstr[i++] = *str2++;
	newstr[i] = '\0';
	return (newstr);
}

/*esta funcion junta str1 y str2 en un nuevo string y pone un caracter
nulo al final.*/