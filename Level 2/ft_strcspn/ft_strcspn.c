/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:49 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/20 16:39:09 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	len = 0;
	int		i;

	while (s[len])
	{
		i = 0;
		while (reject[i])
		{
			if(s[len] == reject[i])
				return (len);
			i++;
		}
		len++;
	}
	return (len);
}

/*int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("\tft_strcspn(\"%s\", \"%s\") = %lu\n", argv[1], argv[2], ft_strcspn(argv[1], argv[2]));
		printf("\tstrcspn(\"%s\", \"%s\") = %lu\n", argv[1], argv[2], strcspn(argv[1], argv[2]));
		if (ft_strcspn(argv[1], argv[2]) == strcspn(argv[1], argv[2]))
			printf("\n\tLes deux fonctions fonctionnent de la même manière.\n");
		else
			printf("\n\tLes deux fonctions ne fonctionnent pas de la même manière.\n");
	}
	else
		printf("Usage: %s s1 s2\n", argv[0]);
}*/
