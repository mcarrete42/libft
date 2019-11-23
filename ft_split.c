/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:00:06 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/23 18:21:40 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;

	if (!(s))
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char *) * ft_strlen(s) + 1)))
		return (NULL);
	j = 0;
	while (s[j] != '\0')
	{
		if (s[0] == c)
			j++;
		i = 0;
		while (s[i] != c)
			res[j][i] = s[i];
			i++;
		j++;
	}
	return (res);
}

int		main()
{
	char *s;
	char c;
	char *res;

	s = "aPEPEaJOSEaMAMENa";
	c = ' ';
	res = *ft_split(s, c);
	printf("Original string: %s\nSplit string: %s", s, res);
	return (0);

}

