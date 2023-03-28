/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:49 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/21 16:34:58 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	const char	*tmp1;
	const char	*tmp2;

	tmp1 = s1;
	while (*tmp1)
	{
		tmp2 = s2;
		while (*tmp2)
		{
			if (*tmp1 == *tmp2)
				return ((char *)tmp1);
			tmp2++;
		}
		tmp1++;
	}
	return (NULL);
}

/*int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("\tLa fonction ft_strpbrk retourne\t: %s\n", ft_strpbrk(argv[1], argv[2]));
		printf("\tLa fonction strpbrk retourne\t: %s\n", strpbrk(argv[1], argv[2]));
		if (strpbrk(argv[1], argv[2]) == ft_strpbrk(argv[1], argv[2]))
			printf("\n\tLes deux fonctions fonctionnent de la même manière.\n");
		else
			printf("\n\tLes deux fonctions ne fonctionnent pas de la même manière.\n");
	}
	else
		printf("Usage: %s argument\n", argv[0]);
}*/
