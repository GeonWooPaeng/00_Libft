/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:19:30 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 22:58:17 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *arr)
{
	int		larr;
	int		idx;
	int		tmp;

	larr = ft_strlen(arr);
	idx = 0;
	while (idx < larr)
	{
		larr--;
		tmp = arr[idx];
		arr[idx] = arr[larr];
		arr[larr] = tmp;
		idx++;
	}
	return (arr);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		sign;
	int		idx;

	sign = 0;
	idx = 0;
	arr = (char *)malloc(sizeof(char) * 12);
	if (arr == NULL || n == 0)
		return ((n == 0) ? "0" : 0);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	while (n)
	{
		arr[idx++] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		arr[idx++] = '-';
	arr[idx] = '\0';
	return (ft_strrev(arr));
}

// int main(void)
// {
// 	char *a = ft_itoa(-2147483647);
// 	printf("%s\n", a);
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-244));
// }