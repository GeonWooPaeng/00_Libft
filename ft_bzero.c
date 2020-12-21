/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:46:33 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/21 19:34:04 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, '\0', n);
}

// int main(void)
// {
//     long long *ptr = malloc(sizeof(long long));
//     long long *ft_ptr = malloc(sizeof(long long));
//     memset(ptr, 0x27, 3);
//     memset(ft_ptr, 0x27, 3);
//     ft_bzero(ptr, 2);
//     bzero(ft_ptr, 2);
//     printf("0x%llx\n", *ptr);   
//     printf("0x%llx\n", *ft_ptr);
//     free(ptr);
//     free(ft_ptr);
//     return (0);
// }
