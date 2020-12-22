/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 23:37:59 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 14:48:12 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *ss1;
    unsigned char   *ss2;
    size_t          i;

    ss1 = (unsigned char *)s1;
    ss2 = (unsigned char *)s2;
    i = 0;
    while (i < n && *ss1 && *ss2 && *ss1 == *ss2)
    {
        ss1++;
        ss2++;
        i++;
    }
    if (i == n)
        return (0);
    return (*(unsigned char *)ss1 - *(unsigned char *)ss2);
}
