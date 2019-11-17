/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 19:02:40 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/17 18:45:04 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len < ft_strlen(haystack))
		return (NULL);
	while (*haystack != '\0' && len > 0)
	{
		if (*haystack == needle[0])
		{
			j = 1;
			while (haystack[j] == needle[j] && needle[j] != '\0' && j < len)
				j++;
			if (needle[j] == '\0')
				return ((char *) haystack);
			haystack++;
		}
		len--;
	}
	return (NULL);
}
