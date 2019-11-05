/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:42:59 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/05 21:07:33 by mcarrete         ###   ########.fr       */
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

	/*/BZERO
	char s[10] = "123456";
	i = 0;
	//bzero(s, 0);
	ft_bzero(s, 2);
	while (i < 7)
	{
		write (1, &s[i], 1);
		i++;
	}
	printf("\nhola");*/

	/* MEMCPY*/
	char dst[10] = "123456789";
	char src[10] = "abcdefghij";
	i = 0;
	//memcpy(dst, src, 2);
	ft_memcpy(dst, src, 2);
	printf("my dest with copied content: %s\n", dst);

	return (0);
}
