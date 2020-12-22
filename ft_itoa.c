/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:19:30 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 17:13:14 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int		ft_intlen(int n)
{
	int	cnt;

	cnt = 0;
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_strrev(char *arr)
{
	int		larr;
	int		idx;
	char	tmp;

	larr = ft_strlen(arr);
	idx = 0;
	while(idx < larr)
	{
		larr--;
		tmp = arr[idx];
		arr[idx] = arr[larr];
		arr[larr] = tmp;
		idx++;
	}
	return (arr);
}

// char	*ft_itoa(int n)
// {
// 	char	*arr;
// 	int		sign;
// 	int		idx;

// 	sign = 0;
// 	idx = 0;
// 	if (!(arr = (char *)malloc(sizeof(char) * 12)))
// 		return (0);
// 	if (n == -2147483648)
// 		return("-2147483648");
// 	if (n < 0)
// 		sign = 1;
// 	else
// 	{
// 		arr[idx] = n % 10 + '0';
// 		idx++;
// 	}
// 	if (sign)
// 		arr[idx++] = '-';
// 	arr[idx] = '\0';
// 	return (ft_strrev(arr));
// }

int main(void)
{
	char *a = "gpaeng";
	char *c = ft_strrev(a);
	printf("%s", c);
}