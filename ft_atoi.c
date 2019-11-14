/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:55:04 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/14 21:21:51 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long is_negative;
	long long digit;

	is_negative = 1;
	digit = 0;
	while (ft_isspace(*str) && *str != 0)
		str++;
	if (*str == '-')
	{
		is_negative = is_negative * (-1);
		str++;
	}
	while (*str != '\0')
	{
		if (ft_isdigit(*str))
			digit = digit * 10 + (*str - '0');
		else
			break ;
		str++;
	}
	if (digit * is_negative > 2147483647)
		return (-1);
	if (digit * is_negative < -2147483648)
		return (0);
	return (digit * is_negative);
}

int main()
{
	printf("22 - ft_atoi:\n");
	char stratoi[] = "-9223372036854775807L";
	int atoiresult;
	atoiresult = atoi(stratoi);
	//printf("%d", atoi(stratoi));
	printf("%d", atoiresult);
}
