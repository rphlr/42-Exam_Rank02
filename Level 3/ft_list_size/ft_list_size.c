/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:50 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/23 11:13:27 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*node;

	count = 0;
	node = begin_list;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		t_list	*list;
		t_list	*new_node;
		int		i;
		int		size;

		list = NULL;
		i = 1;
		while (i < argc)
		{
			new_node = malloc(sizeof(t_list));
			if (!new_node)
			{
				printf("Error: malloc failed\n");
				return (-1);
			}
			new_node->data = argv[i];
			new_node->next = list;
			list = new_node;
			i++;
		}
		size = ft_list_size(list);
		printf("The list has %d elements.\n", size);
	}
	else
		printf("Usage: %s ...\n", argv[0]);
}



