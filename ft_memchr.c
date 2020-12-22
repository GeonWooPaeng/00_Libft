/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 23:35:39 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 14:46:36 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *tmp;

    tmp = (unsigned char *)s;
    while(n--)
    {
        if (*tmp == (unsigned char)c)
            return ((void *)tmp);
        tmp++;
    }
    return (0);
}
