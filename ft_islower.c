/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dslaveev <dslaveev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:17:03 by dslaveev          #+#    #+#             */
/*   Updated: 2024/03/04 20:17:43 by dslaveev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
