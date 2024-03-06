/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dslaveev <dslaveev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:41:53 by dslaveev          #+#    #+#             */
/*   Updated: 2024/03/05 19:04:15 by dslaveev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *c, int s, size_t n)
{
	unsigned char	*str;

	str = c;
	while (*str && n > 0)
	{
		if (*str == s)
			return ((char *)str);
		str++;
		n--;
	}
	return (NULL);
}
