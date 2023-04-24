/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:50:40 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/24 08:04:07 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

size_t	ft_strlen(const char *str);
int		ft_toupper(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_tolower(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strcmp(const char *s1, const char *s2, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memset(void *str, int c, size_t n);
size_t	strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strnstr(const char *needle, const char *haystack, size_t len);
void	*ft_calloc(size_t nitems, size_t sizeitems);
char	*ft_strdup(const char *s1);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *str1, char const *str2);
int		ft_chech_if_trimable(char const *str, char c);
void	ft_put_in_arr(char *arr, const char *str, int start, int end);
char	*ft_strtrim(char const *str, char const *set);
int		count_words(const char *str, char c);
char	*malloc_word(const char *s, char c);
char	**ft_split(char const *s, char c);
char	*ft_strrev(char *str);
int		ft_intlen(int n);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif