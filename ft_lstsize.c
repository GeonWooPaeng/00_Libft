/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 13:47:11 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/23 17:02:07 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int llen;

	llen = 0;
	while (lst)
	{
		lst = lst->next;
		llen++;
	}
	return (llen);
}
// int main()
// {
// 	t_list *a[3];
// 	a[0] = malloc(sizeof(t_list));
// 	a[1] = malloc(sizeof(t_list));
// 	a[2] = malloc(sizeof(t_list));
// 	char *b = "a";
// 	char *c = "b";
// 	char *d = "c";

// 	a[0]->content = b;
// 	a[0]->next = a[1];
// 	a[1]->content = c;
// 	a[1]->next = a[2];
// 	a[2]->content = d;
// 	a[2]->next = 0;
// 	printf("%d\n", ft_lstsize(a[0]));
// 	free(a[0]);
// 	free(a[1]);
// 	free(a[2]);

// }