/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:50 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/22 16:23:19 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	expand_str(char *str)
{
	while (*str == ' ' || *str == '\t')
			str++;
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
		{
			while (*str == ' ' || *str == '\t')
				str++;
			if (!*str)
				break;
			write(1, "   ", 3);
		}
		while ((*str & 31))
			write(1, str++, 1);
		if (!*str)
			break;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	else
		write(1, "\n", 1);
}
