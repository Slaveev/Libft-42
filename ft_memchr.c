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
	const unsigned char	*str;
	unsigned char		uc;
	size_t			i;

	str = (unsigned char *) c;
	uc = c;
	i = 0;
	if (n == 0)
		return (NULL);
	while (n > i)
	{
		if (*(str + i) == uc)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
