/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:21:42 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/07 09:21:42 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int     ft_strlen(const char *str)  //chequear prototipo en el man y cambiarlo en lib.h tmb
{
    int i;
    char *strptr;

    strptr = str;
    i = 0;
    while (strptr[i] != 0)
    {
        i++;
    }

    return (i);
}