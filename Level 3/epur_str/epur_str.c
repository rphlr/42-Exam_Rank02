/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:50 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/22 16:23:26 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
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
			write(1, " ", 1);
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
		epur_str(argv[1]);
	else
		write(1, "\n", 1);
}
