/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 12:50:20 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/21 14:59:10 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *tmp;

    tmp = s;
    while (n-- > 0)
    {
        *tmp++ = c;
    }
    return (s);
}

// int main(void)
// {
//     long long *ptr = malloc(sizeof(long long));
//     long long *ft_ptr = malloc(sizeof(long long));
//     memset(ptr, 0x27, 1);
//     ft_memset(ft_ptr, 0x27, 1);
//     printf("0x%llx\n", *ptr);   
//     printf("0x%llx\n", *ft_ptr);
//     free(ptr);
//     free(ft_ptr);
//     return (0);
// }
