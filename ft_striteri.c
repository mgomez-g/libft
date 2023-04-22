/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:57:47 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/22 14:03:50 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*Lo que hace la función ft_striteri es iterar sobre cada carácter de la cadena
s y llamar a la función f pasándole como primer argumento el índice del carácter
en la cadena y como segundo argumento un puntero al carácter en sí mismo. 
Es decir, la función f será aplicada a cada carácter de la cadena s junto con 
su índice en la cadena.

En resumen, la función ft_striteri sirve para aplicar una función determinada 
a cada carácter de una cadena, junto con su índice en la cadena.*/