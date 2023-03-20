/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:48 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/20 13:16:25 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str)
{
	while (*str)
	{
		if ((*str >= 'a') && (*str <= 'z'))
			write(1, &(char){*str++ - 32}, 1);
		else if ((*str >= 'A') && (*str <= 'Z'))
			write(1, &(char){*str++ + 32}, 1);
		else
			write(1, str++, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
}
