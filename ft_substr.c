/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dslaveev <dslaveev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:53:49 by dslaveev          #+#    #+#             */
/*   Updated: 2024/03/08 11:35:18 by dslaveev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (len >= ft_strlen(s + start))
		len = ft_strlen(s + start);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*ptr;
// 	size_t	i;

// 	if (!s)
// 		return (NULL);
// 	if (start > len)
// 		return (ft_strdup(""));
// 	i = 0;
// 	if (len >= ft_strlen(s + start))
// 		len = ft_strlen(s + start);
// 	ptr = ft_calloc(len + 1, sizeof(char));
// 	if (!ptr)
// 		return (NULL);
// 	while (i < len)
// 	{
// 		ptr[i] = s[start + i];
// 		i++;
// 	}
// 	ptr[i] = '\0';
// 	return (ptr);
// }
