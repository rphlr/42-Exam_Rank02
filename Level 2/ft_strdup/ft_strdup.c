/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:49 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/21 16:35:10 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char    *ft_strdup(char *src)
{
	char	*dest;
	char	*tmp;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	tmp = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (tmp);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("\tLa chaîne originale est: %s\n", argv[1]);
		printf("\tLa chaîne dupliquée avec strdup est: %s\n", strdup(argv[1]));
		printf("\tLa chaîne dupliquée avec ft_strdup est: %s\n", ft_strdup(argv[1]));
		if (strcmp(strdup(argv[1]), ft_strdup(argv[1])) == 0)
			printf("\n\tLes deux fonctions fonctionnent de la même manière.\n");
		else
			printf("\n\tLes deux fonctions ne fonctionnent pas de la même manière.\n");
	}
	else
		printf("Usage: %s argument\n", argv[0]);
}*/
