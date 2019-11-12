/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:55:04 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/12 20:35:22 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int is_negative;
	int digit;
	int i;

	i = 0;
	is_negative = 1;
	digit = 0;

	while (ft_isspace(str[i]) && str[i] != '\0')
		i++;
	if (str[i] == '-')
		is_negative = is_negative * (-1);
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 1)
			digit = digit * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (digit * is_negative);
}
