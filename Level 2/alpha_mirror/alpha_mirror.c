/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:48 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/20 13:51:31 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	alpha_mirror(char *str)
{
	while (*str)
	{
		if (((*str >= 'a') && (*str <= 'z')) || ((*str >= 'A') && (*str <= 'Z')))
		{
			if ((*str >= 'a') && (*str <= 'z'))
				write(1, &(char){'a' + 'z' - *str++}, 1);
			else if ((*str >= 'A') && (*str <= 'Z'))
				write(1, &(char){'A' + 'Z' - *str++}, 1);
		}
		else
			write(1, str++, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
}
