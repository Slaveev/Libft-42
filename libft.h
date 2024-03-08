/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dslaveev <dslaveev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:03:08 by dslaveev          #+#    #+#             */
/*   Updated: 2024/03/08 11:39:27 by dslaveev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isspace(int c);
int		ft_isprint(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalnum(int c);
int		ft_atoi(const char *str);
int		ft_strncmp(char *dest, const char *src, int n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);

size_t	ft_strlen(char const *str);
char	*ft_strcpy(char *dest, char *src);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *str, int character);
char	*ft_strrchr(const char *str, int character);
char	*ft_strnstr(char *haystack, const char *needle, int len);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

size_t	ft_strlcat(char *dest, const char *src, size_t size);

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *dst, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *c, int s, size_t n);
void	*ft_calloc(size_t num, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
