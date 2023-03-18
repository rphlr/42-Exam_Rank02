/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:48 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/18 16:12:12 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int nbr)
{
	if (nbr >= 10)
		putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

int	main()
{
	int	nbr;

	nbr = 0;
	while (nbr <= 100)
	{
		if (nbr % 3 == 0)
			write(1, "fizz\n", 5);
		else if (nbr % 5 == 0)
			write(1, "buzz\n", 5);
		else if (nbr % 15 == 0)
			write(1, "fizzbuzz\n", 9);
		else
		{
			putnbr(nbr);
			write(1, "\n", 1);
		}
		nbr++;
	}
}
