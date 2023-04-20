/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:50:42 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/20 10:50:43 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	dest = malloc(count * size);
	if (!dest)
		return (0);
	ft_bzero (dest, count * size);
	return (dest);
}

/*Esta función reserva un bloque de memoria contigua del tamaño especificado 
por count * size y lo inicializa a cero utilizando la función ft_bzero 
. Si la asignación de memoria falla, la función devuelve un puntero nulo.*/