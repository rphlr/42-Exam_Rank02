/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:48 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/20 11:43:42 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	nbr;

	while (*str)
	{
		if (((*str >= 'a') && (*str <= 'z')) || ((*str >= 'A') && (*str <= 'Z')))
		{
			nbr = (*str & 31) - 1;
			while (nbr--)
				write(1, str, 1);
		}
		write(1, str++, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
}
