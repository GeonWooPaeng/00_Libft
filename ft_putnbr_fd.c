/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:19:09 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 15:30:07 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('8', fd);
	}
	else if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n / 10, fd);
	}
	else
	{
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

// int main(void)
// {
// 	ft_putnbr_fd(0, 1);
// 	ft_putnbr_fd(2147483647, 1);
// 	ft_putchar_fd('\n',1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	ft_putchar_fd('\n',1);
// }