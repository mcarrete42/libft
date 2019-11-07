/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:33:15 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/07 09:33:15 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int     ft_isdigit(const char *str) //comprobar prototipo en el man

{
    int i;
    char *strptr;

    strptr = str;
    i = 0;
    while (strptr[i] != 0 && strptr[i] >= '0' && strptr[i] <= '9')
    {
        i++;
    }
    i++;
    if (strptr[i] == 0)
        return (1); //cequear que este es uno
    return (0); // chequear que este es cero
}