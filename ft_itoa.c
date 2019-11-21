/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:27:18 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/21 19:32:55 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len_calc(size_t nb)
{
	int i;

	i = 0;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	i++;
	printf("len_calc = %d\n", i);
	return (i);
}

static char		*ft_reverse(char *c, int buff)
{
	int i;
	int j;

	j = buff;
	i = c[0] == '-' ? 1 : 0;
	printf("Llega 03\n");
	while (i < (buff + 1)/ 2)
	{
		c[i] = c[j];
		c[j] = c[i];
		i++;
		j--;
	}
	printf("My c = %s\n", c);
	return(c);
}

char	*ft_itoa(int n)
{
	size_t		nb;
	char		*c;
	int			buff;

	nb = n;
	buff = ft_len_calc(nb);
	if (!(c = malloc(sizeof(char) * buff + 1)))
		return (NULL);
	if (nb < 0)
	{
		c[0] = '-';
		nb = -nb;
	}
	printf("Llega 02\n");
	while (nb > 9)
	{
		nb = nb / 10;
		*c = nb % 10 + '0';
		c++;
	}
	ft_reverse(c, buff);
	c[buff + 1] = 0;
	return(c);


}

int		main()
{
	int n = 1234;
	char *c;
	c = ft_itoa(n);
	printf("My numero: %d\nMy string: %s\n", n, c);
}
