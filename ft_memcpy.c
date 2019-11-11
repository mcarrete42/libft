/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:18:57 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/11 20:02:18 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long	i;
	const char		*ptrsrc;
	char			*ptrdst;

	ptrsrc = src;
	ptrdst = dst;

	i = 0;
	while (i < n && ptrdst != 0)
	{
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	return (dst);
}
