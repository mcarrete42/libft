/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:42:59 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/11 20:25:23 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		main(void)
{
	/*
	int i;
	// MEMSET
	printf("01 - ft_memset:\n ");
	char str[10] = "   hola!";
	//memset(str,'s', 2);
	ft_memset(str,'s', 2);
	printf("%s\n", str);

	//BZERO
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

	// MEMCPY (revisado)
	printf("03 - ft_memcpy:\n");
	char dst[10] = "123456789";
	char src[10] = "abc";
	//memcpy(dst, src, 2);
	ft_memcpy(dst, src, 2);
	printf("%s\n", dst);

	// MEMCCPY (revisado)
	printf("04 - ft_memccpy:\n");
	char dstccpy[10] = "123456789";
	char srcccpy[10] = "abcdefghij";
	//memccpy(dstccpy, srcccpy, 'a', 2);
	ft_memccpy(dstccpy, srcccpy, 'a', 2);
	printf("%s\n", dstccpy);

	// MEMMOVE (revisado)
	printf("05 - ft_memmove:\n");
	char dstmv[] = "hola";
	char srcmv[] = "quet";
	printf("%s", ft_memmove(dstmv, srcmv, 0));
	//printf("%s", memmove(dst, src, 2));

	//STRLEN (revisado)
	printf("08 - ft_strlen:\n");
	char lenstr[] = "1234567";
	//int a = strlen(lenstr);
	int a = ft_strlen(lenstr);
	printf("%d", a);
*/
	// ISALPHA revisar esta mal!!!!
	printf("09 - ft_isalpha:\n");
	char alphstr[] = "abcd";
	//int a = isalpha(alphstr);
	int a = ft_isalpha(alphstr);
	printf("%d", a);

/*
	// ISDIGIT revisar!!!!
	printf("10 - ft_isdigit:\n");
	char digstr[] = "12345";
	//int a = isdigit(digstr);
	int a = ft_isdigit(digstr);
	printf("%d", a);

	// ISALNUM revisar!!!!
	printf("11 - ft_isalnum:\n");
	char alnumstr[] = "abcd12345";
	//int a = isalnum(digstr);
	int a = ft_isalnum(alnumstr);
	printf("%d", a);

	// ISASCII revisar!!!!
	printf("12 - ft_isascii:\n");
	char asciistr[] = "12{abcd12345";
	//int a = isascii(asciistr);
	int a = ft_isascii(asciistr);
	printf("%d", a);

	// ISPRINT revisar!!!!
	printf("13 - ft_isprint:\n");
	char printstr[] = "12{abc´+`+`1*`ç321";
	//int a = isprint(printstr);
	int a = ft_isprint(printstr);
	printf("%d", a);

	// TOUPPER revisar!!!!
	printf("14 - ft_toupper:\n");
	char upperstr[] = "esto SE TIENE QUE ver en mayuscula";
	//toupper(upperstr);
	ft_toupper(upperstr);
	printf("%s", upperstr);

	// TOLOWER revisar!!!!
	printf("15 - ft_tolower:\n");
	char lowerstr[] = "ESTO SE TIENE QUE ver en minuscula";
	//tolower(lowerstr);
	ft_tolower(lowerstr);
	printf("%s", lowerstr);
	return (0);

//	ATOI
	printf("22 - ft_atoi:\n");
	char stratoi[] = "    -567dfgd78";
	int atoiresult;
	atoiresult = ft_atoi(stratoi);
	//printf("%d", atoi(stratoi));
	printf("%d", atoiresult);
	*/
}

