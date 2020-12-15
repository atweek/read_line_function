/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:44:55 by atweek            #+#    #+#             */
/*   Updated: 2020/12/12 17:16:21 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dst = NULL;
	dst = malloc(sizeof(char) *
		(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (dst)
	{
		while (s1[j] != '\0')
			dst[i++] = s1[j++];
		j = 0;
		while (s2[j] != '\0')
			dst[i++] = s2[j++];
		dst[i] = '\0';
		return (dst);
	}
	else
		return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*dst;
	size_t	strlen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen(s);
	if (start > strlen)
		start = strlen;
	if (len > strlen - start)
		len = strlen - start;
	j = 0;
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while ((j < len) && (s[start]))
		dst[j++] = s[start++];
	dst[j] = '\0';
	return (dst);
}