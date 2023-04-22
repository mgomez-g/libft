/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:22:09 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/22 14:23:00 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
}

/*En resumen, la función "ft_putstr_fd" imprime una cadena de caracteres 
en un archivo utilizando la función "ft_putchar_fd" en un bucle "while" 
que recorre la cadena de caracteres hasta llegar al final.*/