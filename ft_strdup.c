/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:30:04 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/20 10:39:32 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s1) + 1;
	dup = (char *)malloc(len);
	if (dup)
		ft_memcpy(dup, s1, len);
	return (dup);
}

/*Esta función recibe como parámetro un puntero a una cadena de caracteres
 (s1), y devuelve un puntero a una copia de esa cadena en memoria dinámica.
Primero se obtiene la longitud de la cadena s1 usando la función ft_strlen,
y se le suma 1 para incluir el carácter nulo final. Luego, se reserva
memoria dinámica con malloc para la copia de la cadena. Si la asignación
de memoria fue exitosa, se copia el contenido de la cadena original en
la copia usando la función ft_memcpy, y se devuelve un puntero a la copia.
En caso contrario, se devuelve un puntero nulo.*/