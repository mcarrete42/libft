/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 20:50:32 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/05 18:42:01 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef LIB_H
#define LIB_H

void	*ft_memset(void *str, int c, size_t n);
void	*ft_bzero(void *s, size_t n);

#endif
