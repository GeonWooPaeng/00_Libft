/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 19:09:59 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/21 23:34:55 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (unsigned char)c)
            return ((char *)s);
        s++;
    }
    return (0);
}

// int main(void)
// {
//     char *a = "gpaeng abc";
//     char b = 'h';
//     char *c = ft_strchr(a, b);
//     char *d = strchr(a, b);
//     printf("%s\n",c);
//     printf("%s\n",d);
// }