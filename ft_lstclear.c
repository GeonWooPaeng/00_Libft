/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 16:15:14 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/23 17:13:28 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	int	llst;

	llst = ft_lstsize(*lst);
	while (llst--)
	{
		del(lst[llst]->content);
		free(lst[llst]);
	}
	*lst = 0;
}

// void	ft_del(void *lst)
// {
// 	t_list *tmp;

// 	tmp = lst;
// 	free(tmp->content);
// }

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
// 	ft_lstclear(a, ft_del);

// }