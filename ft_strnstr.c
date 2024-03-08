/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dslaveev <dslaveev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:55:51 by dslaveev          #+#    #+#             */
/*   Updated: 2024/03/05 10:10:47 by dslaveev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, const char *needle, int len)
{
	int	i;
	int	j;

	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (ft_strncmp(&haystack[i + j], &needle[j], 1) == 0
			&& (i + j) < len)
		{
			if (!haystack[i + j] && !needle[j])
				return ((char *)&haystack[i]);
			j++;
		}
		if (!needle[j])
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
