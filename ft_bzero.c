/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:09:44 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/05 19:52:43 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned long	i;
	char			*ptr;

	ptr = s;
	i = 0;
	if (n == 0)
		return (s);
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return (s);
}
