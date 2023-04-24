/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:25:36 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/24 08:07:37 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*El código define la función ft_bzero, que se utiliza para inicializar un 
bloque de memoria a cero. La función toma dos argumentos: un puntero s que 
apunta al comienzo del bloque de memoria a inicializar y un valor n que indica 
el tamaño del bloque en bytes.*/