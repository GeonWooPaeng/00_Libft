/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 22:49:33 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 16:05:22 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dtmp;
    unsigned char *stmp;

    dtmp = dest;
    stmp = (unsigned char *)src;
    if (!dest && !src)
        return (0);
    if (dest <= src)
    {
        while (n--)
            *dtmp++ = *stmp++;
    }
    else
    {
        dtmp += n;
        stmp += n;
        while (n--)
            *--dtmp = *--stmp;
    }
    return (dest);
}

// int main(void)
// {
//     char arr[10] = "test";
//     char b[10] = "hipaeng";
//     ft_memmove(arr+2, b, ft_strlen("test"));
//     printf("%s", arr);
//     return (0);
// }