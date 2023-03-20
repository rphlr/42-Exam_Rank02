/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:49 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/20 14:48:54 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	do_op(int first_number, char operator, int second_number)
{
	if (operator == '*')
		return (first_number * second_number);
	else if (operator == '/')
		return (first_number / second_number);
	else if (operator == '+')
		return (first_number + second_number);
	else if (operator == '-')
		return (first_number - second_number);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1])
		printf("%d", do_op(atoi(argv[1]), argv[2][0], atoi(argv[3])));
	printf("\n");
}
