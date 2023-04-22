/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:13:53 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/22 14:24:12 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*La función "ft_putchar_fd" es una función que se utiliza para escribir 
un solo carácter en un archivo utilizando el descriptor de archivo 
proporcionado como argumento.*/