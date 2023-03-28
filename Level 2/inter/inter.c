/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:49 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/21 17:50:24 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	inter(char *str1, char *str2)
{
	int		i;
	int		j;
	int		k;
	bool	already_printed;

	i = 0;
	while (str1[i])
	{
		j = 0;
		k = 0;
		already_printed = false;
		while (str1[k] && k < i)
		{
			if (str1[i] == str1[k++])
				already_printed = true;
		}
		while (str2[j])
		{
			if (str1[i] == str2[j++] && !already_printed)
			{
				write(1, &str1[i], 1);
				already_printed = true;
			}
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	else
		write(1, "\n", 1);
}
