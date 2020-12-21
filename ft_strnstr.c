/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 18:42:48 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/21 19:33:54 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;

    if (*little == '\0')
        return ((char *)big);
    i = 1;
    while (*big && i < len)
    {
        if (*big == *little && ft_strncmp(big, little, ft_strlen(little)) == 0)
            return ((char *)big);
        big++;
        i++;
    }
    return (0);
}

// int main()
// {
//     char *b = "go go yogurt";
//     char *c = "gu";
//     char *d = ft_strnstr(b,c,9);
//     char *e = strstr(b,c);
//     printf("%s\n",e);
//     printf("%s",d);

// }