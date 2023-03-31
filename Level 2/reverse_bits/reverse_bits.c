/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:49 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/18 14:54:49 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		unsigned char octet = (unsigned char) atoi(argv[1]);
		printf("The original value is: %d\n", octet);
		printf("The reversed value is: %\n", reverse_bits(octet));
	}
	else
		printf("Usage: %s <number>\n", argv[0]);
}
