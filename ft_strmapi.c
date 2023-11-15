/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkilpela <lkilpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:49:51 by lkilpela          #+#    #+#             */
/*   Updated: 2023/11/14 11:18:35 by lkilpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	unsigned int	str_len;

	if (s == NULL || f == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/**
 * This function first checks if s or f is NULL. If either is, it returns NULL. 
 * It then allocates memory for str and checks if the allocation was successful. 
 * It then iterates over s, applying f to each character and storing the result 
 * in str. Finally, it appends a null terminator to str and returns it.
 * 
 * 
 */