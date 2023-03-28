/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:49 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/21 17:05:35 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	len = 0;
	int		i;

	while (s[len])
	{
		i = 0;
		while (accept[i])
		{
			if(s[len] == accept[i])
				break;
			i++;
		}
		if (!accept[i])
			return (len);
		len++;
	}
	return (len);
}

/*int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("\tft_strspn(\"%s\", \"%s\") = %lu\n", argv[1], argv[2], ft_strspn(argv[1], argv[2]));
		printf("\tstrspn(\"%s\", \"%s\") = %lu\n", argv[1], argv[2], strspn(argv[1], argv[2]));
		if (ft_strspn(argv[1], argv[2]) == strspn(argv[1], argv[2]))
			printf("\n\tLes deux fonctions fonctionnent de la même manière.\n");
		else
			printf("\n\tLes deux fonctions ne fonctionnent pas de la même manière.\n");
	}
	else
		printf("\tUsage: %s s1 s2\n", argv[0]);
}*/
