/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 20:35:11 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/27 15:52:20 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_lenword(char const *s, char c)
{
	size_t lenword;

	lenword = 0;
	while (*s && *s++ != c)
		lenword++;
	return (lenword);
}

static size_t	ft_cntword(char const *s, char c)
{
	size_t cnt;

	cnt = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s && *s != c)
		{
			cnt++;
			while (*s && *s == c)
				s++;
		}
		while (*s && *s != c)
			s++;
	}
	return (cnt);
}

static char		*ft_fd_strdup(const char *s, size_t lenword)
{
	char	*arr;

	if (!(arr = (char *)malloc(sizeof(char) * (lenword + 1))))
		return (0);
	ft_memcpy(arr, s, lenword);
	return (arr);
}

static void		ft_free(char **s, int idx)
{
	while (idx--)
		free(s[idx]);
	free(s);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	cntword;
	size_t	lenword;
	size_t	aidx;

	cntword = ft_cntword(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * (cntword + 1))))
		return (0);
	aidx = 0;
	while (aidx < cntword)
	{
		while (*s && *s == c)
			s++;
		lenword = ft_lenword(s, c);
		if (!(arr[aidx] = ft_fd_strdup(s, lenword)))
		{
			ft_free(arr, aidx - 1);
			return (0);
		}
		aidx++;
		s += lenword;
	}
	arr[cntword] = 0;
	return (arr);
}

// int main(void)
// {
// 	char *a = "N0z72TJ6dZ5Wp4e ZmvOCfG 7oO5GzIJEFv3 XI49VvOanu LdStqY Te7QwUpLRhX5Z xUFz2YoX 5IVwAH6c CmiIPT6RMZnVrb zNGYMirLP70UafQ CjiG5Nz6ZOUoqBnIY Lr8 KkwmId 96GaTXBe7 cfgAn6p9RHrw OSthyr45J0G9MoqF1";
// 	char **b = ft_split(a, ' ');
// 	int idx = 0;
// 	while (b[idx])
// 	{
// 		printf("%s\n", b[idx]);
// 		idx++;
// 	}
// }