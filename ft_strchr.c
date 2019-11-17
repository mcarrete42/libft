/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:39:28 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/16 21:39:52 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char			cchar;
	unsigned char			*ptrs;

	ptrs = (unsigned char *)s;
	cchar = (unsigned char)c;
	while (*s != 0 && *s != cchar)
	{
		s++;
		return (cchar);
	}
	return (NULL);
}

int 	main()
{
	char s = "hola";
	int c = 32;
	char *res = ft_strchr(s, c);
	printf(%s, res);
}
