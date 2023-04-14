/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:50:40 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/14 17:35:55 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdio.h>

size_t	ft_strlen(const char *str);
int	ft_toupper(int c);
int	ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_tolower(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
#endif