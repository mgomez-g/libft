/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:15:16 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/26 10:42:26 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	while (*str && ((char)character != *str))
		str++;
	if (*str == (char)character)
		return ((char *)str);
	return (0);
}

/*La función strchr() en C se utiliza para buscar la primera aparición de un 
carácter específico en una cadena de caracteres. Su sintaxis es la siguiente:*/