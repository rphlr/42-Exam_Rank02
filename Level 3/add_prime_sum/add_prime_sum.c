/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:50 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/22 12:07:50 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
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
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *str++ - '0';
	return (result * negative);
}

bool is_prime(int n)
{
	int i;

	if (n < 2)
		return (false);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (false);
		i++;
	}
	return (true);
}


int	add_prime_sum(char *str)
{
	int number;
	
	number = ft_atoi(str);
	while (!is_prime(number))
		number++;
	return (number);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("\tYour string\t\t: \"%s\"\n", argv[1]);
		printf("\tExtracted number\t: %d\n", ft_atoi(argv[1]));
		printf("\tNext prime\t\t: %d\n", add_prime_sum(argv[1]));
	}
	else
		printf("Usage: %s number\n", argv[0]);
}
