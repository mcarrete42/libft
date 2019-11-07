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
	/* MEMSET */
	printf("01 - ft_memset:\n ");
	char str[10] = "   hola!";
	//memset(str,'s', 2);
	ft_memset(str,'s', 2);
	printf("%s\n", str);

	/*/BZERO */
	printf("02 - ft_bzero:\n ");
	char s[10] = "123456";
	i = 0;
	//bzero(s, 0);
	ft_bzero(s, 2);
	while (i < 7)
	{
		write (1, &s[i], 1);
		i++;
	}
	printf("\n");

	// MEMCPY
	printf("03 - ft_memcpy:\n ");
	char dst[10] = "123456789";
	char src[10] = "abcdefghij";
	//memcpy(dst, src, 2);
	ft_memcpy(dst, src, 2);
	printf("%s\n", dst);

	// STRLEN revisar!!!!
	printf("08 - ft_strlen:\n ");
	char lenstr[] = "1234567";
	//int a = strlen(lenstr);
	int a = ft_strlen(lenstr);
	printf("%d", a);

	// ISALPHA revisar!!!!
	printf("09 - ft_isalpha:\n ");
	char alphstr[] = "abcd";
	//int a = isalpha(alphstr);
	int a = ft_isalpha(alphstr);
	printf("%d", a);


	// ISDIGIT revisar!!!!
	printf("10 - ft_isdigit:\n ");
	char digstr[] = "12345";
	//int a = isdigit(digstr);
	int a = ft_isdigit(digstr);
	printf("%d", a);

	// ISALNUM revisar!!!!
	printf("11 - ft_isalnum:\n ");
	char alnumstr[] = "abcd12345";
	//int a = isalnum(digstr);
	int a = ft_isalnum(alnumstr);
	printf("%d", a);

	// ISASCII revisar!!!!
	printf("12 - ft_isascii:\n ");
	char asciistr[] = "12{abcd12345";
	//int a = isascii(asciistr);
	int a = ft_isascii(asciistr);
	printf("%d", a);

	// ISPRINT revisar!!!!
	printf("13 - ft_isprint:\n ");
	char printstr[] = "12{abc´+`+`1*`ç321";
	//int a = isprint(printstr);
	int a = ft_isprint(printstr);
	printf("%d", a);

	// TOUPPER revisar!!!!
	printf("14 - ft_toupper:\n ");
	char upperstr[] = "esto SE TIENE QUE ver en mayuscula";
	//toupper(upperstr);
	ft_toupper(upperstr);
	printf("%s", upperstr);

	// TOLOWER revisar!!!!
	printf("14 - ft_tolower:\n ");
	char lowerstr[] = "ESTO SE TIENE QUE ver en minuscula";
	//tolower(lowerstr);
	ft_tolower(lowerstr);
	printf("%s", lowerstr);
	return (0);
}
