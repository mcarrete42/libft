/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 20:24:25 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/19 20:39:08 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t len_s1;
	size_t len_s2;
	size_t i;
	size_t j;
	char *s2;


	if(!(s2 = malloc(sizeof(char) * len_s2)))
		return (NULL);


	len_s2 = j - i; // ?

	//hacer un

	s2[k] = '0';  //dejar esto para que devolver un puntero a un '\0' y que pueda liberar memoria incluso cuando la cadena dse qeda vacia.
	return(s2);
}
/*
int		main()
{
	char *s1 = "0000hola que tal0000000";
	char *set = "000";
	char *s2 = ft_strtrim(s1, set);
	printf("Original String: %s\nNew String: %s", s1, s2);
}
*/
