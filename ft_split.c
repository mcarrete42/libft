/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:00:06 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/24 12:43:16 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_mem_alloc_word(char const *s, char c)
{
	int		count_word;
	int		i;
	char	**word_pointer;

	count_word = (s[0] == c ? 1 : 0);
	i = 0;
//	printf("llega 01\n");
	while (s[i] != 0)
	{
		if (s[i] != c)
			i++;
		count_word++;
		i++;
	}
//	printf("llega 01b\n");
	word_pointer = (char **)malloc(sizeof(char *) * count_word + 1);
	if (!word_pointer)
		return (NULL);
	//printf("llega 01c\n");
	return (word_pointer);
}

char	**ft_word_filler(char **word_pointer, char const *s, char c)
{
	int		word_counter;
	int		letter_counter;
	int		s_counter;

	word_counter = 0;
	s_counter = (s[0] == c ? 1 : 0);
	printf("llega 03\n");
	while (s[s_counter] != 0)
	{
		letter_counter = (s[s_counter] == c ? 1 : 0);
		printf("letter_counter = %d\n", letter_counter);
		while (s[s_counter] != c)
		{
			word_pointer[word_counter][letter_counter] = s[s_counter];
			printf("llega 03b\n");
			letter_counter++;
			s_counter++;
		}
		word_counter++;
	}
	printf("llega 03b\n");
	word_pointer[word_counter][letter_counter] = '\0';
	return (word_pointer);
}

char	**ft_split(char const *s, char c)
{
	char	**word_pointer;

	if (!(s))
		return (NULL);
	word_pointer = ft_mem_alloc_word(s, c);
	if (!(word_pointer))
		return (NULL);
	printf("llega 02\n");
	ft_word_filler(word_pointer, s, c);
	return (word_pointer);
}

int		main(void)
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
