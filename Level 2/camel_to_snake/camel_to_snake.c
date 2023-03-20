/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:48 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/20 13:57:06 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	camel_to_snake(char *str)
{
	while(*str)
	{
		if (((*str >= 'A') && (*str <= 'Z')))
		{
			write(1, "_", 1);
			write(1, &(char){*str++ + 32}, 1);
		}
		else
			write(1, str++, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write(1, "\n", 1);
}
