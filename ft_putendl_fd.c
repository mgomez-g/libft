/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:27:56 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/24 11:36:56 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*En resumen, la función "ft_putendl_fd" es una función que imprime una cadena 
de caracteres en un archivo utilizando la función "ft_putstr_fd" y luego imprime 
un carácter de nueva línea utilizando la función "ft_putchar_fd". Este código es 
una función útil para imprimir una línea de texto en un archivo y luego pasar a 
la siguiente línea.*/