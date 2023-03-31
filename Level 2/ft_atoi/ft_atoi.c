/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:49 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/22 16:40:22 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	negative;

	result = 0;
	negative = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative *= -1;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *str++ - '0';
	return (result * negative);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_atoi(argv[1]));
}*/
