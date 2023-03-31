/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:49 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/23 11:58:37 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_bits(unsigned char octet)
{
	int		i;
	char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		unsigned char octet = (unsigned char) atoi(argv[1]);
		printf("The binary representation of %d is: \n", octet);
		print_bits(octet);
		printf("\n");
	}
	else
		printf("Usage: %s <number>\n", argv[0]);
}
