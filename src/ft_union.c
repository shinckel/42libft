/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:42:04 by shinckel          #+#    #+#             */
/*   Updated: 2024/06/10 18:59:23 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen(char *str)
{
	int	i; 

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

// int	main(int argc, char **argv)
// {
// 	int i = 0;
// 	int j = 0;
// 	int k = 0;
// 	int tab[255] = {0};
// 	char *str = ft_strcpy(argv[1], argv[2]);

// 	if (argc == 3)
// 	{
// 		while(str[j])
// 		{
// 			i = 0;
// 			k = 0;
// 			while (str[i])
// 			{
// 				if (str[j] == str[i])
// 				{
// 					k += 1;
// 					tab[i] = k;
// 				}
// 				i++;
// 			}
// 			j++;
// 		}
// 		i = 0;
// 		while (str[i])
// 		{
// 			if (tab[i] == 1)
// 				write(1, &str[i], 1);
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
