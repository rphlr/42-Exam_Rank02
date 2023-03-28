/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:54:49 by rrouille          #+#    #+#             */
/*   Updated: 2023/03/21 16:54:49 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char    *ft_strrev(char *str)
{
	int		i;
	int		len;
	char	*rev;

	i = 0;
	len = ft_strlen(str) - 1;
	rev = malloc(sizeof(char) * (len + 2));
	if (rev == NULL || !str)
		return (NULL);
	while (str[i])
		rev[len--] = str[i++];
	rev[i] = '\0';
	return (rev);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("\tArgument : %s\n\tReversed : %s", argv[1], ft_strrev(argv[1]));
	else
		printf("\tUsage: %s [string to reverse]\n", argv[0]);
}*/
