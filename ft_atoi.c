/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:10:52 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/23 20:58:36 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == '\f' || c == '\n' || c == '\r' ||
	c == '\t' || c == '\v' || c == ' ');
}

int	ft_atoi(const char *nptr)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr++ == '-')
			sign *= -1;
	}
	while (ft_isdigit(*nptr))
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * result);
}

// int main()
// {
//     char *a = "     -2147483648";
//     char *b = "   -2";
//     char *c = "-++123";

//     printf("%d\n", ft_atoi(a));
//     printf("%d\n", ft_atoi(b));
//     printf("%d\n", ft_atoi(c));
    
//     return (0);
// }