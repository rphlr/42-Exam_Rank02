/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:48 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/20 11:33:57 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	while (*str)
	{
		if (((*str >= 'a') && (*str <= 'm')) || ((*str >= 'A') && (*str <= 'M')))
			write(1, &(char){*str + 13}, 1);
		else if (((*str >= 'm') && (*str <= 'z')) || ((*str >= 'M') && (*str <= 'Z')))
			write(1, &(char){*str - 13}, 1);
		else
			write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
}
