/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@mcarrete.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:09:52 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/07 11:09:52 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char ft_tolower(char *str)
{
    int i;
    char *strptr;

    strptr = str;
    i = 0;
    while (strptr[i] != 0)
    {
        if (strptr[i] >= 'a' && strptr[i] <= 'z')
            strptr[i] = strptr[i] + 32; //check si es + o - 32
      i++;
    }
    return (str);
}
