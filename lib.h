/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 20:50:32 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/05 21:00:13 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef LIB_H
#define LIB_H

void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memmove(void *str1, const void *str2, size_t n);
int     ft_strlen(const char *str);
int     ft_isalpha(const char *str);
int     ft_isdigit(const char *str);
int     ft_isalnum(const char *str);
int     ft_isascii(const char *str);
int     ft_isprint(const char *str);
int     ft_atoi(const char *nptr);
#endif