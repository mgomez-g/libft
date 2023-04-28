/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:10:20 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/28 17:38:41 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	size_t	word;

	word = 0;
	while (*str)
	{
		if (*str != c)
		{
			word++;
			while (*str != c && *str)
				str++;
		}
		else
			str++;
	}
	return (word);
}

static char	*malloc_word(const char *s, char c)
{
	char	*word;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	char		**splited;

	splited = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!splited || !s)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			splited[i] = malloc_word(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	splited[i] = 0;
	return (splited);
}

/*La función ft_split en C se utiliza para dividir una cadena en subcadenas
basadas en un delimitador específico. Esta función toma como entrada una 
cadena y un carácter delimitador y devuelve una matriz de cadenas (strings) 
que representa las subcadenas de la cadena original separadas por el 
delimitador.*/