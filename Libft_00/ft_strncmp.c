/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:18:18 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/21 17:26:41 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int i;

    i = 0;
    while (*s1 && *s2 && *s1 == *s2 && i < n)
    {
        s1++;
        s2++;
        i++;
    }
    if (i == n)
        return (0);
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
// int main(void)
// {
//     char *s1 = "  ddd";
//     char *s2 = "  dddgg";
//     printf("%d\n",strncmp(s1, s2, 5));
//     printf("%d\n",ft_strncmp(s1, s2, 5));
// }