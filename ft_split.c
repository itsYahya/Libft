/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:03:44 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 13:00:37 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *str, char ch, int count)
{
	size_t	index;
	int		len;

	index = 0;
	len = 0;
	while (index < (ft_strlen((char *)str) + 1))
	{
		if (str[index] != ch && str[index] != '\0')
			len++;
		else
		{
			if (len)
				count++;
			len = 0;
		}
		index++;
	}
	return (count);
}

static int	ft_len(const char *str, char sep, int start)
{
	int	len;

	len = 0;
	if (start)
		start += 1;
	while (str[start] != sep && str[start] != '\0')
	{
		len++;
		start++;
	}
	return (len);
}

static char	**ft_free(char **res, int index)
{
	while (index-- > 0)
		free(res[index]);
	free(res);
	return (0);
}

static char	**fill_in(char **res, const char *str, char ch, int count)
{
	int	i;
	int	index;
	int	j;

	i = 0;
	index = 0;
	while (i < count)
	{
		j = 0;
		res[i] = (char *)malloc(sizeof(char) * (ft_len(str, ch, index) + 1));
		if (res[i] == 0)
			return (ft_free(res, i));
		while (str[index] == ch)
			index++;
		while (str[index] != ch && str[index] != '\0')
			res[i][j++] = str[index++];
		res[i++][j] = '\0';
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *str, char ch)
{
	char	**result;
	int		count;

	if (str == 0)
		return (0);
	count = ft_count(str, ch, 0);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (result == NULL)
		return (NULL);
	result = fill_in(result, str, ch, count);
	return (result);
}
// int	main(void)
// {
// 	char	**table = ft_split("l, mi.", 'i');
// 	// while (table && *table)
// 	// 	printf("%s\n", *table++);
// 	return (0);
// }
