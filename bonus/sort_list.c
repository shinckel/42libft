/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:15:03 by shinckel          #+#    #+#             */
/*   Updated: 2024/06/10 19:23:34 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ascending(int a, int b)
{
	return (a <= b);
}

// 108, 73, 45
t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*tmp;
	int		swap;

	tmp = lst;
	while (lst->next != NULL)
	{
		if ((*cmp)(lst->number, lst->next->number) == 0)
		{
			swap = lst->number;
			lst->number = lst->next->number;
			lst->next->number = swap;
			lst = tmp;
		}
		else
		{
			lst = lst->next;
		}
	}
	lst = tmp;
	return (lst);
}

//create node linked list
t_list	*ft_create_elem(int number)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new)
	{
		new->number = number;
		new->next = NULL;
	}
	return (new);
}

//add node linked list
void	ft_list_push_back(t_list **begin_list, int number)
{
	t_list	*tmp;

	tmp = *begin_list;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_elem(number);
	}
	else
		*begin_list = ft_create_elem(number);
}

int	main(void)
{
	int		num1;
	int		num2;
	int		num3;
	t_list	*list;

	num1 = 108;
	num2 = 73;
	num3 = 45;
	list = ft_create_elem(num1);
	ft_list_push_back(&list, num2);
	ft_list_push_back(&list, num3);
	sort_list(list, ascending);
	while (list)
	{
		printf("%d\n", list->number);
		list = list->next;
	}
	return (0);
}
