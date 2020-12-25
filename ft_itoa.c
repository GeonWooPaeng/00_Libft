/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:19:30 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/25 22:38:28 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t ft_nlen(int n)
{
	size_t cnt;

	cnt = 0;
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char *ft_itoa(int n)
{
	char *str;
	long nbr;
	size_t nlen;
	size_t sign;

	nbr = n;
	nlen = n > 0 ? 0 : 1;
	nbr = nbr > 0 ? nbr : -nbr;
	sign = n > 0 ? 1 : 0;
	nlen += ft_nlen(n);
	if (!(str = (char *)malloc(sizeof (char) * (nlen + 1))))
		return (0);
	*(str + nlen--) = '\0';
	while (nbr > 0)
	{
		*(str + nlen--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (nlen == 0 && str[1] == '\0')
		*(str + nlen) = '0';
	else if (nlen == 0 && sign == 0)
		*(str + nlen) = '-';
	return (str);
}
// int main(void)
// {
// 	char *a = ft_itoa(-2147483647);
// 	printf("%s\n", a);
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-244));
// }