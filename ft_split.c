/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 20:35:11 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 21:12:27 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int		ft_cntword(char *s, char c)
{
	int cnt;
	
	cnt = 0;
	while (*s)
	{
		if (*s == c)
			cnt++;
		while (*s != c)
			s++;
		s++;
	}
	return (cnt);
}

// char	**ft_split(char const *s, char c)
// {
// }


int main(void)
{
	char *a = "gpaengkgpaengkgpaengkk";
	char c = 'k';
	printf("%d\n",ft_cntword(a, c));
}