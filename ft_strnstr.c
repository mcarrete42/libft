/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 19:02:40 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/16 20:34:05 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t j;
	size_t i;
	char *ptrhay;
	char *ptrneedle;

	ptrhay = (char *)haystack;
	ptrneedle = (char *)needle;

	i = 0;
	if (ptrneedle[0] == '\0')
		return (ptrhay);
	if (len < ft_strlen(haystack))
		return (NULL);
	while (ptrhay[i] != '\0' && i < len)
	{
		j = 0;
		while (ptrhay[i + j] == ptrneedle[j] && ptrneedle[j] != '\0' && j < len)
		{
			j++;
		}
		if (ptrneedle[j] == '\0')
			return (ptrhay + i);
		i++;
		len--;
	}
	return (NULL);
}
