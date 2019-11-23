/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 20:24:25 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/22 19:47:37 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		get_start(char const *s1, char const *set)
{
	size_t start;
	size_t i;

	start = 0;
	while (s1[start] != 0)
	{
		i = 0;
		while (s1[start] != set[i] && set[i] != 0)
			i++;
		if (set[i]== 0)
			break;
		start++;
	}
	return (start);
}

static size_t		get_end(char const *s1, char const *set)
{
	size_t end;
	size_t i;

	end = ft_strlen(s1) - 1;
	while (s1[end] != 0 && end >= 0)
	{
		i = 0;
		while (s1[end] != set[i] && set[i] != 0)
			i++;
		if (set[i] == 0)
			break;
		end--;
	}
	return (end);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t i;
	char *s2;
	size_t len_s2;

	if (s1 == NULL)
		return (NULL);
	start = (get_start(s1, set) < ft_strlen(s1) ? get_start(s1, set) : -1);
	end = (get_end(s1, set) > start ? get_end(s1, set) : -1);
	len_s2 = (end - start) + 2;

	if (!(s2 = (char *)malloc(sizeof(char) * len_s2)))
		return (NULL);
	i = 0;
	if (end == (size_t)-1 || start == (size_t)-1)
	{
		s2[0] = '\0';
		return (s2);
	}
	while (i <= ((len_s2) - 2))
		{
			s2[i] = s1[start];
			i++;
			start++;
		}
	s2[i] = '\0';
	return(s2);
}
