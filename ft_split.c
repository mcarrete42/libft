/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:00:06 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/24 21:40:27 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_word_counter(char const *s, char c)
{
	int			count_word;
	size_t		i;
	char		**word_pointer;

	count_word = (s[0] == c ? 1 : 0);
	i = count_word;
	while (s[i] != 0)
	{
		if (s[i] != c)
			i++;
		if (s[i] == c && i < (ft_strlen(s) - 1))
			count_word++;
		i++;
	}
	return (count_word);
}
char		**ft_mem_alloc_pointer(char const *s, char c)
{
	int			count_word;
	size_t		i;
	char		**word_pointer;

	count_word = (s[0] == c ? 1 : 0);
	i = count_word;
	while (s[i] != 0)
	{
		if (s[i] != c)
			i++;
		if (s[i] == c && i < (ft_strlen(s) - 1))
			count_word++;
		i++;
	}
	word_pointer = (char **)malloc(sizeof(char *) * (count_word + 1));
	if (!word_pointer)
		return (NULL);
	return (word_pointer);
}

//hacer esta funcion
int			ft_letter_counter(char *s, char c)
{
	while (s != 0 && s[i] != c)
	{

		i++;
	}
}

char		**ft_word_filler(char **word_pointer, char const *s, char c)
{
	size_t		word_counter;
	size_t		letter_counter;
	size_t		s_counter;

	word_counter = 0;
	s_counter = (s[0] == c ? 1 : 0);
	while (s[s_counter] != 0)
	{
		letter_counter = 0;
		while (s[s_counter] != c)
		{
			word_pointer[word_counter][letter_counter] = s[s_counter];
			letter_counter++;
			s_counter++;
		}
		word_counter++;
		s_counter++;
	}
	word_pointer[word_counter][letter_counter] = '\0';
	return (word_pointer);
}

char		**ft_split(char const *s, char c)
{
	char	**word_pointer;
	int		i;
	int		string_count;

	if (!(s))
		return (NULL);
	word_pointer = ft_mem_alloc_pointer(s, c);
	if (!(word_pointer))
		return (NULL);
	string_count = ft_strlen(*word_pointer) - 1;
	printf("len word_pointer = %zu\n", ft_strlen(*word_pointer));

	//revisar este while
	while (i < ft_word_counter(s, c))
	{
		word_pointer[i] = malloc(sizeof(char) * ft_letter_counter(s, c));
		i++;
	}
	//while (i < word_count)
	//hacer funcion para contar palabras. Asignar malloc en el while de cada. while (i < word_count) del word pointer;
	printf("len word_pointer = %zu\n", ft_strlen(*word_pointer));
	//ft_word_filler(word_pointer, s, c);

	return (word_pointer);
}

int			main(void)
{
	char *s;
	char c;
	char *res;

	s = "aPEPEaJOSEaMAMENa";
	c = 'a';
	res = *ft_split(s, c);
	printf("Original string: %s\nSplit string: %s", s, res);
	return (0);
}
