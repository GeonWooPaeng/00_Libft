/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 23:37:59 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/23 13:33:50 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	ss1 = s1;
	ss2 = s2;
	i = 0;
	while (i < n && *ss1 && *ss2 && *ss1 == *ss2)
	{
		ss1++;
		ss2++;
		i++;
	}
	if (i == n + 1)
		return (0);
	return (*ss1 - *ss2);
}

// int main(void)
// {
//     char *s1 = "  ddd";
//     char *s2 = "  dddgg";
//     // printf("%d\n",memcmp(s1, s2, 5));
//     printf("%d\n",ft_memcmp(s1, s2, 6));
// }
