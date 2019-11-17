/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 23:56:59 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/16 15:39:36 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *s1ptr;
	unsigned char *s2ptr;

	s1ptr = (unsigned char *)s1;
	s2ptr = (unsigned char *)s2;

	if (n == 0)
		return (0);
	while (*s1ptr == *s2ptr && *s1ptr != '\0' && *s2ptr != '\0' && n > 0)
	{
		s1ptr++;
		s2ptr++;
		n--;
	}
	return (*s1ptr - *s2ptr);
}
