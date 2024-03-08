/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dslaveev <dslaveev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:37:07 by dslaveev          #+#    #+#             */
/*   Updated: 2024/03/05 09:41:42 by dslaveev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i--] == (char)character)
			return ((char *)str + i + 1);
	}
	return (0);
}
