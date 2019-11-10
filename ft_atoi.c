/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:55:04 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/10 21:55:04 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int     ft_atoi(const char *nptr)
{
 	int is_negative;
	int digit;
	int i;

	i = 0;
	is_negative = 1;
	digit = 0;

	while ((nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v' || nptr[i] == '\f'
		|| nptr[i] == '\r' || nptr[i] == ' ') && nptr[i] != '\0')
		i++;
	if (nptr[i] == '-')
		is_negative = is_negative * (-1);

	while (nptr[i] != '\0')
	{
		if (nptr[i] >= 48 && nptr[i] <= 57)
			digit = digit * 10 + (nptr[i] - '0');
		else
			break ;
		i++;
	}
	return (digit * is_negative);
}
