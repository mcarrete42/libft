/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:18:57 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/05 21:19:58 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
//es un copy de ft_memcpy cual es la dif?
void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned long	i;
	const char		*ptrstr2;
	char			*ptrstr1;
	char			*temp;

	*temp = temp[n];
	ptrstr2 = str2;
	ptrstr1 = str1;
	i = 0;
	while (i < n)
	{
		temp[i] = ptrstr2[i];
		i++;
	}
	i = 0;
	while (i < n && ptrstr1[i] != '\0')
	{
		ptrstr1[i] = temp[i];
		i++;
	}
	return (str1);
}
