/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:48 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/20 13:16:43 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	while (*str)
	{
		if (((*str >= 'a') && (*str <= 'y')) || ((*str >= 'A') && (*str <= 'Y')))
			write(1, &(char){*str++ + 1}, 1);
		else if (*str == 'z' || *str == 'Z')
			write(1, &(char){*str++ - 25}, 1);
		else
			write(1, str++, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rotone(argv[1]);
	write(1, "\n", 1);
}
