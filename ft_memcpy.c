/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:18:57 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/14 17:59:50 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long	i;
	const char		*ptrsrc;
	char			*ptrdst;

	ptrsrc = src;
	ptrdst = dst;
	i = 0;
	if (ptrdst == 0 && ptrsrc == 0)
		return (NULL);
	while (i < n)
	{
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	return (dst);
}
