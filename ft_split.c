/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 20:35:11 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/25 22:39:26 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_cntword(char *s, char c)
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
			while (*s && *s != c)
				s++;
		}
		s++;
	}
	return (cnt);
}

static size_t ft_wordlen(char *s, char c)
{
	size_t len;
	size_t idx;

	len = 0;
	idx = 0;
	while (s[idx] && s[idx] != c)
	{
		len++;
		idx++;
	}
	return (len);
}

static char *ft_strdup_fd(char *s, char c)
{
	char *arr;
	size_t wordlen;

	wordlen = ft_wordlen(s, c);
	if (!(arr = (char *)malloc(sizeof(char) * (wordlen))))
		return (0);
	ft_memcpy(arr, s, wordlen);
	return (arr);
}

char **ft_split(char const *s, char c)
{
	char **arr;
	char *ptr;
	size_t aidx;
	
	ptr = (char *)s;
	if (!(arr = (char **)malloc(sizeof(char *) * (ft_cntword(ptr, c) + 1))))
		return (0);
	aidx = 0;
	while (*ptr)
	{
		while (*ptr && *ptr == c)
			ptr++;
		if (*ptr && *ptr != c)
		{
			arr[aidx] = ft_strdup_fd(ptr, c);
			aidx++;
			while (*ptr && *ptr != c)
				ptr++;
		}
	}
	arr[aidx] = 0;
	return (arr);
}

// int main(void)
// {
// 	char *a = "aasdfasd";
// 	char c = 's';
// 	char **b = ft_split(a, c);
// 	int idx = 0;
// 	while (b[idx])
// 	{
// 		printf("%s\n", b[idx]);
// 		idx++;
// 	}
// }