/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:18:57 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/12 18:12:17 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned long	i;
	unsigned char	value;
	const char		*ptrsrc;
	char			*ptrdst;

	ptrsrc = src;
	ptrdst = dst;
	value = n;
	i = 0;

	while (i < n && ptrdst != 0)
	{
		ptrdst[i] = ptrsrc[i];
		if (ptrsrc[i] == (char)c)  // cuando encuentra c para de copiar
			break ;
		i++;
	}
	if (ptrsrc[i] == '\0')  //no ha encontrado c antes del final
		return (NULL);  //si no encuentra c, returna null.
	return (dst);  //si encuentra c manda la string hasta c (incluido)
}
