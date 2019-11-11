/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:33:15 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/11 20:24:36 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		ft_isalpha(int c)
{
	int				i;
	unsigned char	*strptr;

	strptr = c;
	i = 0;

	while (strptr[i] != 0 && strptr[i] >= 'a' && strptr[i] <= 'z' ||
		strptr[i] >= 'A' && strptr[i] <= 'Z')
		i++;
	if (strptr[i] == 0)
		return (1);
	return (0);
}
