/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:42:59 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/05 19:55:40 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	main(void)
{
	int i;
	/* MEMSET
	char str[10] = "   hola!";
	//memset(str,'s', 2);
	ft_memset(str,'s', 2);
	printf("%s", str);*/

	/* BZERO
	char s[10] = "123456";
	i = 0;
	//bzero(s, 0);
	ft_bzero(s, 0);
	while (i < 7)
	{
		write (1, &s[i], 1);
		i++;
	}
	printf("\nhola");*/


	return (0);
}
