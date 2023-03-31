/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:50 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/23 11:01:04 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// int	check_base(char *base)
// {
// 	int	i;
// 	int	j;

// 	if (base == 0 || ft_strlen(base) < 2)
// 		return (0);
// 	i = -1;
// 	while (base[++i])
// 	{
// 		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
// 			return (0);
// 		j = i + 1;
// 		while (++j > i)
// 		{
// 			if (base[i] == base[j])
// 				return (0);
// 			j++;
// 		}
// 	}
// 	return (1);
// }

// int	ft_calc_base(char *base, char c)
// {
// 	int	i;

// 	i = -1;
// 	while (base[++i])
// 	{
// 		if (base[i] == c)
// 			return (i);
// 	}
// 	return (0);
// }

// int	ft_atoi_base(char *str, int base)
// {
// 	int	negative;
// 	int	result;

// 	negative = 1;
// 	result = 0;
// 	if (!check_base(base))
// 		return (result);
// 	while ((*str >= 9 && *str <= 13) || *str == ' ')
// 		str++;
//	while (*str == '+' || *str == '-')
//	{
// 		if (*str++ == '-')
// 			negative *= -1;
//	}
// 	while (*str && !(ft_calc_base(base, *str)))
// 		result = result * ft_strlen(base) + ft_calc_base(base, *str++);
// 	return (result * negative);
// }





char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int get_digit(char c, int digits_in_base)
{
	int max_digit;

	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int negative = 1;
	int digit;

	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			negative *= -1;
	}
	while ((digit = get_digit(to_lower(*str++), str_base)) >= 0)
		result = result * str_base + (digit * negative);
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("\tYour base is\t: %d\n", atoi(argv[1]));
		printf("\tYour number is\t: %d\n", atoi(argv[2]));
		printf("\tAnswer is\t: %d", ft_atoi_base(argv[1], atoi(argv[2])));
	}
}
