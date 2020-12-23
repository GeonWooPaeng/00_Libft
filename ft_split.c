/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 20:35:11 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/23 20:58:34 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_cntword(char *s, char c)
{
	int cnt;

	cnt = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
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

static int		ft_wordlen(char *s, char c)
{
	int	len;
	int idx;

	len = 0;
	idx = 0;
	while (s[idx] && s[idx] != c)
	{
		len++;
		idx++;
	}
	return (len);
}

static char	*ft_strdup_fd(char *s, char c)
{
	char	*arr;
	int		wordlen;

	wordlen = ft_wordlen(s, c);
	if (!(arr = (char *)malloc(sizeof(char) * (wordlen))))
		return (0);
	ft_memcpy(arr, s, wordlen);
	arr[wordlen] = '\0';
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*ptr;
	int		aidx;

	ptr = (char *)s;
	if (!(arr = (char **)malloc(sizeof(char *) * ft_cntword(ptr, c))))
		return (0);
	aidx = 0;
	while (*ptr)
	{
		while (*ptr && *ptr == c)
			ptr++;
		if (*ptr && *ptr != c)
		{
			arr[aidx++] = ft_strdup_fd(ptr, c);
			while (*ptr && *ptr != c)
				ptr++;
		}
		ptr++;
	}
	arr[aidx] = 0;
	return (arr);
}

// int main(void)
// {
// 	char *a = "    ";
// 	char c = ' ';
// 	char **b = ft_split(a, c);
// 	int idx = 0;
// 	while (b[idx])
// 	{
// 		printf("%s\n", b[idx]);
// 		idx++;
// 	}
