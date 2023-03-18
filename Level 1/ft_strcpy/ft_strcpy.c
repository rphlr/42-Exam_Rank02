/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:48 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/18 17:43:49 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	while (*s2)
		*s1++ = *s2++;
	return (s1);
}

/*int	main(int argc, char **argv)
{
	char *first_argument;
	char *second_argument;

	if (argc == 3)
	{
		first_argument = argv[1];
		second_argument = argv[2];

		char result1[100];
		char result2[100];

		ft_strcpy(result1, first_argument);
		strcpy(result2, first_argument);

		if (strcmp(result1, result2) == 0)
		{
			printf("ft_strcpy and strcpy produced the same result: %s\n", result1);
		}
		else
		{
			printf("ft_strcpy and strcpy produced different results:\n");
			printf("ft_strcpy: %s\n", result1);
			printf("strcpy: %s\n", result2);
		}
	}
	else
	{
		printf("Usage: %s <string> <string>\n", argv[0]);
	}
}*/
