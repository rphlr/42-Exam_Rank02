/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:49 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/18 14:54:49 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
	if (n < 2)
		return (0);
	while (n != 1)
	{
		if (n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("\t %d is power of 2 ?", atoi(argv[1]));
		if (is_power_of_2(atoi(argv[1])) == 0)
			printf(" No\n");
		else
			printf(" Yes\n");;
	}
}
